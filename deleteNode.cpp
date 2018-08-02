#include<iostream>
using namespace std;

void create();
void display();
void deleteFirst();
void deleteAfterY(int y);

struct node
{
	int info;
	struct node * next;
} *start=NULL;
int main()
{
	cout<<"DELETION IN LINKED LIST ";
	cout<<"create a linked list "<<endl;
	create();
	display();
	int choice,x,y;
	char ch='y';

	while(ch=='y'||ch=='Y')
	{
	
	cout<<"enter 1 for deleting node at beginning of linked list "<<endl;
	cout<<"enter 2 for deleting node after 'y' "<<endl;
	//	cout<<"enter 4 for exiting "<<endl;
		cin>>choice;
	switch(choice)
	{
		case 1:deleteFirst();
			
				break;
		case 2:cout<<"enter number 'y' whose next node is to be deleted "<<endl;
				cin>>y;
				deleteAfterY( y);
				break;
		
		
		default:cout<<"wrong choice";
				break;
	}
	cout<<"do you want to continue , enter y for yes and n for no"<<"\t";
	cin>>ch;
	
}
	
	
}

	void create()
{
	node *node1=NULL,*end=node1;
	int data;
	cout<<"enter -1 to terminate"<<endl;
	while(1)
	{
		
		cout<<"enter data ";
		cin>>data;
		if(data==-1)
		{
			break;
			
		}
		else
		{
			node1=new node;
			node1->info=data;
			if(start==NULL)
			{
				start=node1;
			 } 
			 else
			 end->next=node1;
			 end=node1;
			 end->next=NULL;
			 
		}
	}
	
}

   void display()
   {
   	node *temp= start;
	   while (temp!=NULL)
	   {
	   	cout<<temp->info<<"  ";
	   	temp=temp->next;
	   	
		} 
		cout<<endl;
   }
   
   void deleteFirst()
   {
   		struct node *p=start;
		start=p->next;
		delete(p);
		display();
		
   }
   
   void deleteAfterY(int y)
   {
   		struct node *p=start,*q;
		while(p->info!=y)
		{
			if(p->next!=NULL)
			p=p->next;
		}
		if(p->info==y)
		{
			if(p->next==NULL)
			{
	  			cout<<"no node after the entered number "<<endl;
			}
			else
			{
			
				p->next=(p->next)->next;
				display();
			}
   		}
   	
		   else
		   {
		   	cout<<"y not found "<<endl;
		   }
	}
	
