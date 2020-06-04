#include<bits/stdc++.h>
using namespace std;

class Linkedlist{
	
	public:
	int val;
	Linkedlist *next;
	
	Linkedlist(int val)
	{
		this->val=val;
		this->next=NULL;
	}
		
};

void reverse(Linkedlist *head)
{
	Linkedlist *prev=NULL;
	Linkedlist *cur=head;
	Linkedlist *next=NULL;
	while(cur)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}

   head=prev;	
}

Linkedlist* merge(Linkedlist* l1, Linkedlist* l2)
    {
        Linkedlist dump(0);
        Linkedlist* cur = &dump;
        
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
            }
                
            cur = cur->next;
        }
        
        if (l1 != NULL)
            cur->next = l1;
        else
            cur->next = l2;
            
        return dump.next;
    }

Linkedlist* sortList(Linkedlist* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        Linkedlist* slow = head;
        Linkedlist* fast = head->next;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = slow->next;
        slow->next = NULL;
        
        return merge(sortList(head), sortList(fast));
    }
    
    

void print(Linkedlist *head)
{
	Linkedlist *temp=head;
	while(temp!=NULL)
	{
		
		cout<<temp->val<<" ";
		temp=temp->next;
		
	}	
}


int main()
{
	Linkedlist *node1=new Linkedlist(6);
	Linkedlist *node2=new Linkedlist(3);
	Linkedlist *node3=new Linkedlist(1);
	Linkedlist *node4=new Linkedlist(2);
	Linkedlist *node5=new Linkedlist(4);
	
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	
	print(node1);
	cout<<endl;
	Linkedlist *head=sortList(node1);
	print(head);
}
