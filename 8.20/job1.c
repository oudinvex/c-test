#include<stdio.h>
#include<termios.h>
#include<unistd.h>
#include<errno.h>
#include</usr/local/mysql/include/mysql.h>

#define ECHOFLAGS (ECHO | ECHOE | ECHOK | ECHONL)
int set_disp_mode(int fd,int option);  
int main()
{
	int a,i;
	char usr[50];
	char pass[60];
	MYSQL mysql;
	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql,"127.0.0.1","user1","","shopdata",0,NULL,0))
	{
		fprintf(stderr, "Failed to connect to database: Error: %s\n",
				mysql_error(&mysql));
				return 0;
	}
	printf("请输入用户名：\n");
	scanf("%s",&usr);
begin:
	fflush(stdin);
	printf("请输入密码：\n");
	set_disp_mode(STDIN_FILENO,0); 
	scanf("%s",&pass);
	set_disp_mode(STDIN_FILENO,1);
	char chat[100];
	sprintf(chat,"select * from user where name='%s'",usr);
	if(mysql_query(&mysql,chat))
	{
		fprintf(stderr,"NO USER:error:%s\n",mysql_error(&mysql));
	}
	else
	{
		MYSQL_RES* res;
		res = mysql_store_result(&mysql);
		MYSQL_ROW row;
		if(mysql_affected_rows(&mysql) == 1)
		{		row=mysql_fetch_row(res);
			if(strcmp(pass,row[1])==0)
			{
				printf("登陆成功！\n");
				goto start;
			}
			else
			{
				printf("密码错误！\n");
				goto begin;
			}
		}
		printf("访问被拒绝！\n");
		goto begin;
	}

start:
	mysql_query(&mysql, "set names utf8");
	printf("1.商品查询/2.商品添加/3.商品删除/4.商品信息修改？\n5.修改登录用户名6.修改登录密码\n");
	scanf("%d",&a);
	if(1==a)
	{	int b;
		char c[100];
		printf("请输入商品编号：\n");
		scanf("%d",&b);
		sprintf(c,"select * from list where id=%d",b);
		if(mysql_query(&mysql,c))
		{
			fprintf(stderr,"failed to select:error:%s\n",mysql_error(&mysql));
		}
		else
		{
			MYSQL_RES* res;
			res = mysql_store_result(&mysql);
			MYSQL_ROW row;
			if(mysql_affected_rows(&mysql) == 1)
			{
				while(row = mysql_fetch_row(res))
				{
					printf("ID：%s 品名：%s 价格：%s 数量：%s\n",row[0],row[1],row[2],row[3]);
				}
				mysql_free_result(res);
			}
			else
			{
				printf("该商品不存在！\n");
			}
		}	
	}
	else if(2==a)
	{	int b,d,e;
		char c[50];
		char f[200];
		printf("请输入商品信息：\n");
		mysql_query(&mysql, "set names utf8");
		printf("请输入商品id：\n");
		scanf("%d",&b);
		printf("请输入商品名：\n");
		scanf("%d",&c);
		printf("请输入商品单价：\n");
		scanf("%d",&d);
		printf("请输入商品数量：\n");
		scanf("%d",&e);
		sprintf(f,"insert into list values('%d','%s','%d','%d')",b,c,d,e);
		if(mysql_query(&mysql,f))
		{
			fprintf(stderr, "Failed to insert data to table list: Error: %s\n",mysql_error(&mysql));
		}
		else
		{
			if(mysql_affected_rows(&mysql) == 1)
			{
				printf("添加商品信息成功！\n");
			}
			else
			{
				printf("添加商品信息失败！\n");
			}
		}
	}
	else if(3==a)
	{	int b;
		printf("请输入需要删除商品编号：\n");
		scanf("%d",&b);
		char c[100];
		sprintf(c,"delete from list where id=%d",b);
		if(mysql_query(&mysql,c))
		{
			fprintf(stderr,"failed to select:error:%s\n",mysql_error(&mysql));
		}
		else
		{	
			if(mysql_affected_rows(&mysql)==1)
			{	
				printf("删除信息成功！\n");
			}
			else
			{
				printf("编号%d不存在！删除失败！\n",b);
			}
		}
	}
	else if(4==a)
	{
		int b,d,e;
		char c[100];
		char f[100];
		printf("请输入需要更改的商品id：\n");
		scanf("%d",&b);
		printf("请输入新商品信息：\n");
		printf("品名：");
		scanf("%s",&f);
		printf("单价：");
		scanf("%d",&d);
		printf("数量：");
		scanf("%d",&e);
		sprintf(c,"update list set name='%s',price=%d,number=%d where id=%d",f,d,e,b);
		if(mysql_query(&mysql,c))
		{
			fprintf(stderr,"failed to select:error:%s\n",mysql_error(&mysql));
		}
		else
		{
			if(mysql_affected_rows(&mysql)==1)
			{	
				printf("修改信息成功！\n");
			}
			else
			{
				printf("编号%d不存在！修改失败！\n",b);
			}

		}
	}
	else if(5==a)
	{
		printf("请输入新的用户名：\n");
		char b[50];
		char c[100];
		scanf("%s",&b);
		sprintf(c,"update user set name='%s' where name='%s'",b,usr);
		if(mysql_query(&mysql,c))
		{
			fprintf(stderr,"failed to select:error:%s\n",mysql_error(&mysql));
		}
		else
		{
			if(mysql_affected_rows(&mysql)==1)
			{
				printf("修改成功！\n");
			}
			else
			{
				printf("修改失败！\n");
			}
		}
	}
	else if(6==a)
	{
		printf("请输入新的密码：\n");
		char b[50];
		char c[100];
		scanf("%s",&b);
		sprintf(c,"update user set pass='%s' where name='%s'",b,usr);
		if(mysql_query(&mysql,c))
		{
			fprintf(stderr,"failed to select:error:%s\n",mysql_error(&mysql));
		}
		else
		{
			if(mysql_affected_rows(&mysql)==1)
			{
				printf("修改成功！\n");
			}
			else
			{
				printf("修改失败！\n");
			}
		}	
	}
	return 0;
}
int set_disp_mode(int fd,int option)  
{  
	int err;  
	struct termios term;  
	if(tcgetattr(fd,&term)==-1){  
		perror("Cannot get the attribution of the terminal");  
		return 1;  
	}  
	if(option)  
		term.c_lflag|=ECHOFLAGS;  
	else  
		term.c_lflag &=~ECHOFLAGS;  
	err=tcsetattr(fd,TCSAFLUSH,&term);  
	if(err==-1 && err==EINTR){  
		perror("Cannot set the attribution of the terminal");  
		return 1;  
	}  
	return 0;  
} 
