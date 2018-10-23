#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack{
int data;
struct stack *link;
}*top=NULL;

typedef struct stack stk;

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
    printf("Insertion Success!\n");
}

void pop()
{
    stk *tmp;
    if(top==NULL)
    {
        printf("Stack Underflow!!!\n");
    }
    else
    {
        tmp=top;
        printf("Element returned=%d\n",tmp->data);
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
    {
        tmp=top;
        while(tmp->link!=NULL)
        {
            printf("%d->",tmp->data);
            tmp=tmp->link;
        }
        printf("%d->NULL",tmp->data);
    }
}

void main()
{
    int ch;
    ch=1;
    printf("1->push, 2->pop, 3->display, 4->exit\n");
    while(ch!=4)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Wrong choice!\n");
        }
    }
}
