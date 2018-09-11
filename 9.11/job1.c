#include<stdio.h>
#include<stdlib.h>
typedef int T;//声明数据元素类型	
//声明链表节点类型
typedef struct _cord
{
	T data;//数据存储地
	struct _cord* next;//下一个节点

}cord;
//创建空链表
cord* create(void)
{
	cord* cord=malloc(sizeof(cord));
	cord->next=NULL;
	return cord;

}
//尾部插入
void insert_end(T data,cord* head)
{
	cord* cord =malloc(sizeof(cord));
	cord->data=data;
	cord->next=NULL;
	while(NULL!= head->next)
{
	head = head->next;
}
	head->next=cord;
}
//中间插入
void insert(int p,T data,cord* head)
{
	while(p--)
	{
	if (NULL==head) break;
	head = head->next;
	}	
	cord* cord =malloc(sizeof(cord));
	cord->data=data;
	cord->next=head->next;
	head->next=cord;
}

//头部插入
void insert_head(T data,cord* head)
{
	cord* cord=malloc(sizeof(cord));
	cord->data=data;
	cord->next=head->next;
	head->next = cord;
}
//删除节点
int rm(cord* head,T data)
{
	if(head->next == NULL)
	return 0;
	while(head->next!=NULL && head->next->data!=data)
{
	head=head->next;
}
	cord* p=head->next;
	head->next = head->next->next;
	free(p);
	return 1;
}
//销毁链表
void destory(cord* head)
{
	cord* p = NULL;
	while(NULL != head)
{
	p=head->next;
	free(head);
	head=p;
}
}

//判空
int empty(cord* head)
{
	return !(head->next);
}
//获取长度
int size(cord* head)
{
	int p=0;
	while(NULL!=head->next)
	{
	head=head->next;
	p++;
	}
	return p;
}

//遍历数据
void traverse(cord* head,int(*visit)(T* data))
{		
	head=head->next;
	while(head!=NULL)
	{
		if(!visit(&(head->data)))
		break;
	head = head->next;
	}
}
int main()
{
cord* listl= NULL;
listl=create();
insert_head(100,listl);
printf("%d\n",size(listl));	
	
	return 0;
}
