#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node*next;
	struct Node*prev;
};
struct Node*head=NULL;
void InsertionAtBeginning()
{
	int value;
	struct Node*newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the value to insert: ");
	scanf("%d",&value);
	newnode->data=value;
	if(head==NULL)
	{
		newnode->next=newnode;
		newnode->prev=newnode;
		head=newnode;
		return;
	}
	struct Node*last=head->prev;
	newnode->next=head;
	head->prev=newnode;
	newnode->prev=last;
	last->next=newnode;
}
void display()
{
	struct Node*temp=head;
	
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("Linked list is :");
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
int main()
{
	InsertionAtBeginning();
	InsertionAtBeginning();
	InsertionAtBeginning();
	InsertionAtBeginning();
	display();
	
}