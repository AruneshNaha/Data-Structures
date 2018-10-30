#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
}*head=NULL;

typedef struct node Node;

void create()
{
    Node *tmp1,*tmp2;
    int ch=1;
    while(ch!=0)
    {
        tmp1=(Node*)malloc(sizeof(Node));
        printf("Enter node data:");
        scanf("%d",&tmp1->data);
        if(head==NULL)
        {
            tmp1->next=NULL;
            tmp1->prev=NULL;
            head=tmp1;
            tmp2=tmp1;
        }
        else
        {
            tmp1->next=NULL;
            tmp2->next=tmp1;
            tmp1->prev=tmp2;
            tmp2=tmp1;
        }
        printf("Any more nodes? [1/0] :");
        scanf("%d",&ch);
    }
}

void display()
{
    Node *tmp;
    tmp=head;
    while(tmp->next!=NULL)
    {
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("%d->NULL",tmp->data);
}

void main()
{
    create();
    display();
}
