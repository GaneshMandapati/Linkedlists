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

Linkedlist* DeleteGivenNodeRecur(Linkedlist *head,int key)
{
	
 	Linkedlist *temp=head;
	Linkedlist *prev=NULL;
	

		if(temp==NULL)
	{
		return NULL;
	}
	if(temp->data==key)
	{
		head=temp->next;
		return head;
		free(temp);
		
	}
	temp->next=DeleteGivenNodeRecur(temp->next,key);

	return temp;

}
Linkedlist *DeletenodeIterative(Linkedlist *head,int key)
{
	Linkedlist *temp=head;
	Linkedlist *prev=NULL;
	
	for(temp=head;temp!=NULL;prev=temp,temp=temp->next)
	{
		if(temp->data==key)
		{
			if(prev==NULL)
			{
				head=temp->next;
			}
			else
			{
				prev->next=temp->next;
			}
			free(temp);
			return head;
		}
		
	}
}
Linkedlist *Deletenodeatposition(Linkedlist *head,int pos)
{
	Linkedlist *temp1=head;
	Linkedlist *temp2=NULL;
	
	if(pos==0)
	{
		temp1=head->next;
		return temp1;
	}
	for(int i=0;i<pos-1;i++)
	{
		temp1=temp1->next;
	}
	temp2=temp1->next;
	temp1->next=temp2->next;
	
	return head;
	free(temp2);
	
}

void Deletenodepointer(Linkedlist *nodeptr)
{
	 nodeptr->data=nodeptr->next->data;
     nodeptr->next=nodeptr->next->next;
	
	
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


//Deletion using Reccursion
/*Linkedlist* head=DeleteGivenNodeRecur(node1,3);
print(head);
cout<<endl;*/


//delete using iterative

/*Linkedlist* head=DeletenodeIterative(node1,2);
print(head);*/


//DELETE A NODE AT GIVEN POSITION

/*Linkedlist* head=Deletenodeatposition(node1,0);
print(head);
*/

//DELETE A NODE WHEN HEAD NODE IS NOT GIVEN.
//ONLY POINTER TO THAT NODE IS GIVEN

/*Deletenodepointer(node4);
print(node1);
*/
}
