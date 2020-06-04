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
void printMiddle(Linkedlist *head) 
{ 
    int count = 0; 
    Linkedlist *mid = head; 
  
    while (head != NULL) 
    { 
        /* update mid, when 'count' is odd number */
        if (count & 1) 
            mid = mid->next; 
  
        ++count; 
        head = head->next; 
    } 
  
    /* if empty list is provided */
    if (mid != NULL) 
        cout<<"The middle element is"<<mid->data; 
} 
void search(Linkedlist *head,int x)
{
	Linkedlist *temp=head;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			cout<<temp->data<<" is present in linkedlist"<<endl;
			break;
		}
		temp=temp->next;
	}
	
	if(temp==NULL)
	{
		cout<<x<<" is not present in linked list"<<endl;
	}
  	
}

void nthnode(Linkedlist *head,int x)
{
	Linkedlist *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		if(c==x)
		{
			cout<<"The data at index "<<x<<"is "<<temp->data<<endl;
			break;
		}
		c++;
		temp=temp->next;
		
	}
	
	if(temp==NULL)
	{
		cout<<"enter index less than "<<c<<endl;
	   cout<<"YOU ENTERED  "<<x<<endl;
	}
	
}

void nthnodeend(Linkedlist *head,int n)
{
	Linkedlist *temp=head;
	int len=0;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	if(len<n)
	{
		cout<<n<<" is greater than lenth of linked list"<<endl;
	}
	temp=head;
	for(int i=1;i<len-n+1;i++)
	{
		temp=temp->next;
		
	}
	cout<<"Data from last "<<n<<" is "<<temp->data<<endl;
	
}
void FindLoop(Linkedlist *head)
                {
                    Linkedlist *current1,*current2;
                    int present=0;
                    current1=head;
                    current2=head;

                    while(current1!=NULL && current2!= NULL && current2->next!= NULL)
                    { 
                          current1=current1->next;
                          current2=current2->next->next;

                          if(current1==current2)
                          {
                                cout<<"1";
                                present=1;
                          }
                    }
                    if(current1!=current2)
                    {
                    	  cout<<"0";
					}
                    cout<<endl;
                    if(present)
                    {
                    	 int count=0;
                    Linkedlist *temp=current1->next;
                    while(temp!=NULL)
                    {
                    	count++;
                    	temp=temp->next;
					}
					cout<<" length of loop is "<<count<<endl;
					}
                   
                }
                
void middleelement(Linkedlist *head)
{
	Linkedlist *slow=head;
	Linkedlist *fast=head;
	
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	cout<<slow->data;
}

void makelastasfirst(Likedlist *head)
{
	
    
    Linkedlist *temp = head;  
    Linkedlist *tempprev = NULL; 
  
    while (temp->next != NULL)  
    {  
        tempprev = temp;  
        temp = temp->next;  
}
    tempprev->next = NULL;  
  

    temp->next = head;  
  
    head = last; 
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
	Linkedlist *node6=new Linkedlist(6);
	
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=node6;
	
	// SEARCH AN ELEMENT IN LINKEDLIST
/*	print(node1);
	cout<<endl;
	search(node1,7);
*/

//N TH NODE FROM LINKED LIST
  /* print(node1);
	cout<<endl;
    nthnode(node1,3);
    */
    
// N TH NODE FROM END OF LINKED LIST
   
  /*  print(node1);
	cout<<endl;
    nthnodeend(node1,3);
  */
  
  
  
// Find loop in a linked list

 /*cout<<" 1 means loop is there\n";
 cout<<" 0 means loop is not there\n";
 cout<<endl;
FindLoop(node1);

  



//PRINT MIDDLE ELEMENT OF A LINKEDLIST
/*print(node1);
cout<<endl;
middleelement(node1);
*/
print(node1);
   printMiddle(node1);
}
