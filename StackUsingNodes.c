#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack *link;
}*top=NULL;

void push()
{
stk *tmp;
tmp=(stk*)malloc(sizeof(stk));
printf("Enter the data:");
scanf("%d",&tmp->data);
if(top==NULL)
  tmp->link=NULL;
else
  tmp->link=top;
top=tmp;
}

void pop()
{
stk *tmp;
if(top=NULL)
  printf("stack Underflow!\n");
else
{
  tmp=top;
  printf("%d",tmp->data);
  top=tmp->link;
  free(tmp);
  }
  }
  
void display()
{
stk *tmp;
if(top==NULL)
  printf("Stack Underflow!!!\n");
else
  do
  {
    tmp=top;
    printf("%d->",tmp->data);
    tmp=tmp->link;
    }while(tmp->link!=NULL);
printf("%d->NULL",tmp->data);
}
