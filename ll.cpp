#include<iostream>
using namespace std;

void create();
void display();
void insertAtBegin(int x);
void insertAtEnd(int x);
void insertAfterY(int x,int y);

struct node
{
	int info;
	struct node * next;
} *start=NULL;
int main()
{
	cout<<"INSERTION IN LINKED LIST ";
	cout<<"create a linked list "<<endl;
	create();
	display();

	int choice,x,y;
	char ch='y';

	while(ch=='y'||ch=='Y')
	{
	
	cout<<"enter 1 for adding node at beginning of linked list "<<endl;
	cout<<"enter 2 for adding node at end of linked list "<<endl;
	cout<<"enter 3 for adding node after 'y' of linked list "<<endl;
//	cout<<"enter 4 for exiting "<<endl;
		cin>>choice;
	switch(choice)
	{
		case 1:cout<<"enter number to be inserted"<<endl;
				cin>>x;
				insertAtBegin(x);
			
				break;
		case 2:cout<<"enter number to be inserted"<<endl;
				cin>>x;
				insertAtEnd(x);
				break;
		case 3:cout<<"enter number to be inserted"<<endl;
				cin>>x;
				cout<<"enter number after which x is to be inserted"<<endl;
				cin>>y;
				insertAfterY(x,y);
				break;
		//case 4:break;
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
	   	cout<<temp->info;
	   	temp=temp->next;
	   	
		} 
		cout<<endl;
   }
void insertAtBegin(int x)
{
	struct node *p=start,*q;
	q= new struct node;
	q->info=x;
//	cout<<"hello";
	q->next=p;
//	cout<<"hello";
	start=q;
//	cout<<"hello";
		display();
}
void insertAtEnd(int x)
{
	node *p=start,*q;
	q= new node;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	
	
		q->info=x;
		q->next=NULL;

		p->next=q;

	
	
	display();
}
void insertAfterY(int x,int y)
{
	node *p=start,*q;
	q= new node;
	q->info=x;
	while((p->info!=y)&&(p->next!=NULL))
	{
		p=p->next;
	}
		
	if(p->info==y)
	{
		q->next=p->next;
		p->next=q;
		display();

	}
	else
	cout<<y <<" not found in linked list "<<endl;
}

