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

/*void sortedInsert(Node** head_ref, Node* new_node)  
{  
    Node* current;  
     Special case for the head end 
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data)  
    {  
        new_node->next = *head_ref;  
        *head_ref = new_node;  
    }  
    else
    {  
         Locate the node before the point of insertion 
        current = *head_ref;  
        while (current->next!=NULL &&  
            current->next->data < new_node->data)  
        {  
            current = current->next;  
        }  
        new_node->next = current->next;  
        current->next = new_node;  
    }  
}  
*/
void sortedinsert(Linkedlist *head, int data)
{
	Linkedlist *newnode=new Linkedlist(data);
	Linkedlist *temp=head;
	
	

	if(temp==NULL&&temp->data>=newnode->data)
	{
		newnode->next=temp;
		head=newnode;
	}
	else
	{
	while(temp->next!=NULL && temp->next->data<newnode->data)
	{
		temp=temp->next;
	}
	
	newnode->next=temp->next;
	temp->next=newnode;
}
}

Linkedlist  *reverse(Linkedlist *head)
{
	Linkedlist *prev=NULL;
	Linkedlist *cur=head;
	Linkedlist *next=NULL;
	while(cur!=NULL)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}

    head=prev;
	
	return head;	
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
	Linkedlist *node1=new Linkedlist(2);
	Linkedlist *node2=new Linkedlist(5);
	Linkedlist *node3=new Linkedlist(7);
	Linkedlist *node4=new Linkedlist(10);
	Linkedlist *node5=new Linkedlist(15);
	
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	
	print(node1);
	cout<<endl;
   print(reverse(node1));
   cout<<endl;
   sortedinsert(node1,9);
   print(node1);
   cout<<endl;
    sortedinsert(node1,4);
    print(node1);
   
}
