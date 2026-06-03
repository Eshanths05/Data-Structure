#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void append(int data)  //10  20 30

{
    struct Node *newNode=malloc(sizeof(struct Node));
    //newNode=1000  2000  3000
    newNode->data=data;  //1000->data=10  2000->data=20  3000->data=30
    newNode->next=NULL;     //1000->next=null 2000->next=null 3000->next=null

if(head==NULL)
{
    head=newNode;  //head=1000  
}
else
{
    struct Node *temp; //temp=1000
    temp=head;
    while(temp->next!=NULL)//2000->next
    {
        temp=temp->next; //temp=2000
    }
    temp->next=newNode; //2000->next=3000
}

}

void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


int main()
{
    int n,data;
    scanf("%d",&n);
for (int i=0;i<n;i++)
    {
        scanf("%d",&data); //10 20  30
        append(data);
    }
    display();

}
