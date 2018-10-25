#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
}*head;

typedef struct node Node;

void create()
{
	int i=1,el;
	Node *tmp1,*tmp2;
	while(i!=0)
	{
		printf("Enter the node data:");
		scanf("%d",&el);
			tmp1=(Node*)malloc(sizeof(Node));
		tmp1->data=el;
		tmp1->link=NULL;
		if(head==NULL)
		{
			head=tmp1;
		}
		else
		{
			tmp2=head;
			while(tmp2->link!=NULL)
			{
				tmp2=tmp2->link;
			}
			tmp2->link=tmp1;
		}
		printf("Any more nodes??? 1/0: ");
		scanf("%d",&i);
	}
}

void display()
{
	Node *tmp;
	tmp=head;
	printf("The nodes are:\n");
	while(tmp->link!=NULL)
	{
		printf("%d->",tmp->data);
		tmp=tmp->link;
	}
	printf("%d->NULL",tmp->data);
}

void modify()
{
    int num,renum;
    printf("\nEnter the node data u want to replace:");
    scanf("%d",&num);
    printf("Enter the node data to replace:");
    scanf("%d",&renum);
    Node *tmp;
    tmp=head;
    while(tmp->link!=NULL)
    {
        if(tmp->data==num){
            tmp->data=renum;
            break;
        }
        tmp=tmp->link;
    }
    printf("The nodes after replacing the node is:\n");
    display();
}
void main()
{
	create();
	display();
    modify();
}
