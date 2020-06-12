#include<stdio.h>
#include<stdlib.h>
struct node
{   int data;
	struct node *next;
}*top=NULL;
void push(int x)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	if(t==NULL)
	{
		printf("overflow");
	}
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
	
}
int pop()
{
	
}
void Display()
{
 struct node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
int main()
{
	push(1);
	push(3);
	push(8);
	Display();
}
