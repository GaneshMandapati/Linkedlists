#include<bits/stdc++.h>
using namespace std;

class Linkedlist{
	
	public:
	int data;
	Linkedlist *next;
	
	Linkedlist(int data)
	{
		this->data=data;
		this->next=NULL;
	}
		
};

Linkedlist *insertfirst(Linkedlist *head,int data)
{
	Linkedlist *newnode=new Linkedlist(data);
	if(head==NULL)
	{
		return newnode;
	}
	newnode->next=head;
	head=newnode;
	
	
	return head;	
}

Linkedlist *insertafteranode(Linkedlist *prevnode,int data)
{
	
	
	if(prevnode==NULL)
	{
		cout<<"We can not insert after this previous node because it is NULL";
	}
	Linkedlist *newnode=new Linkedlist(data);
	newnode->next=prevnode->next;
	prevnode->next=newnode;
	
}

void insertatlast(Linkedlist *head,int data)
{
	Linkedlist *newnode=new Linkedlist(data);
	if(head==NULL)
	{
		head= newnode;
	}
	Linkedlist *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	
}

int lengthlinkedlist(Linkedlist *head)
{
	int c=0;
	Linkedlist *temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}

int lenthlinkedlistrecursive(Linkedlist *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1+lenthlinkedlistrecursive(head->next);
}

void print(Linkedlist *head)
{
	Linkedlist *temp=head;
	while(temp!=NULL)
	{
		
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	
	
	
}

int main()
{
	Linkedlist *node1=new Linkedlist(1);
	Linkedlist *node2=new Linkedlist(2);
	Linkedlist *node3=new Linkedlist(3);
	Linkedlist *node4=new Linkedlist(4);
	Linkedlist *node5=new Linkedlist(5);
	
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	
	
	//INSERT A NODE AT BEGINING
/*	cout<<"Before inserting Linkedlist is\n";
	print(node1);
	cout<<endl;
	Linkedlist *head=insertfirst(node1,0);
	cout<<" After inserting 0 at front the linked list is\n";
	print(head);
*/


//INSERT AFTER A NODE

/*cout<<"Before inserting 33 after node 3 in Linkedlist \n";
print(node1);
cout<<endl;
insertafteranode(node3,33);
cout<<"after  inserting 33 after node 3 in Linkedlist is\n";
print(node1);
*/

//INSERT A NODE AT LAST OF A LINKEDLIST

/*cout<<" Before inserting 6 at end of linkedlist\n";
print(node1);
cout<<endl;
insertatlast(node1,6);
cout<<"After inserting 6 at end of linkedlist\n";
print(node1);
*/

//FIND LENGTH OF A SINGLY LINKED LIST

/*cout<<"LENGTH OF LINKEDLIST IS\n";
int len=lengthlinkedlist(node1);
cout<<len;
*/

/*cout<<" RECURSIVE LENGTH OF LINKEDLIST IS\n"
int len2=lenthlinkedlistrecursive(node1);
cout<<len2;
*/




}
