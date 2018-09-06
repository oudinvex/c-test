#include<stdio.h>
int main()  
    {  
        int i,j;  
     int max,min,a[10];  
        printf("请输入10个数，每输入一个数按回车键结束:\n");  
        for(i=0;i<10;i++)  
        {  
         scanf("%d",&a[i]);  
        }  
        max=min=a[0];  
        for(i=1;i<10;i++)  
        {     
         if(max<a[i])  
         max=a[i];  
         else if(min>a[i])  
         min=a[i];  
           
        }
	for(j=0;max!=a[j];j++)
{
	;
}
	max=a[j]=min;
	for(i=0;i<10;i++)
	{
	if(max<a[i])
	max=a[i];
	}
        printf("第二大为:%d\n",max);  
        return 0;  
    }   
