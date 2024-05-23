#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct nodetype
{
	int data;
	nodetype* link;
};
class list
{
private:

	nodetype *head=NULL;
public:

		void traverse()
		{
			if (head!=NULL)
			{
				nodetype * curr=head;
				while(curr!=NULL)
				{
					cout<<curr->data<<endl;
					curr=curr->link;
			
				}
			}
		}
		void insertAtstart(int val)
		{
			nodetype *f=new nodetype;
			f->data=val;
			f->link=NULL;
			if (head==NULL)
			head=f;
			else
			{f->link=head;
			head=f;
			}
			
		}
		void insertAtend(int val)
		{
			nodetype *ptr=new nodetype;
			ptr->data=val;
			ptr->link=NULL;
			if (head==NULL)
			{
				head=ptr;
			}
			else
			{
				nodetype *curr=head;
				
				while(curr->link!=NULL)
				{curr=curr->link;
				}
				curr->link=ptr;
			}
		}
		void insertAtmid(int val,int locdata)
		{
			nodetype * curr=head;
			nodetype *ptr=new nodetype;
			ptr->data=val;
			ptr->link=NULL;
			while(curr->data!=locdata)
			{
				curr=curr->link;
				
			}
			ptr->link=curr->link;
			curr->link=ptr;
		}
		void search(int val)
		{
		  int x=0;
			if (head==NULL)
		    cout<<"empty list "<<endl;
		    else
		   {
			 nodetype *curr=head;
		     while(curr!=NULL)
		    {
		    	if(curr->data==val)
				{
					
					x=1;
				break;
				}
				curr=curr->link;
				
			}
				
		}
			if (x==1)
	cout<<"found"<<endl;
	else
		cout<<"not found"<<endl;
		}
	void remove (int val)
		{
			if (head==NULL)
			cout<<"empty"<<endl;
			else if (head->data==val)
			{
				nodetype* temp=head;
				head=head->link;
				delete temp;
			}
			else
			{
				nodetype* prev;
				nodetype *curr=head;
				while(curr!=NULL)
				{
					if(curr->data==val)
					break;
				   prev=curr;
				  curr= curr->link;
				   
				}
				if(curr!=NULL)
				{//4->LINK=5->LINK
					prev->link=curr->link;
					delete curr;
					cout<<"deleted"<<endl;
				}
				else
				cout<<"not found"<<endl;
				
			}
		/*else 
			{
			nodetype *curr=head;
			nodetype *prev;
			while(curr->link!=NULL)
			{
				prev=curr;
				curr=curr->link;
			}
			prev->link=NULL;
			delete curr;
		}*/
		
}
	
};
int main()
{nodetype n;
list l1;
int ch,num,refdata;
do
{
	cout<<"\n------------MENU--------------"<<endl;
	cout<<"press 1 to insert a node at start "<<endl;
	cout<<"press 2 to insert a node at mid "<<endl;
	cout<<"press 3 to insert a node at end "<<endl;
    cout<<"press 4 to search a node  "<<endl;
	cout<<"press 5 to delete a node at any location "<<endl;
	cout<<"press 6 to display  nodes  "<<endl;
	cout<<"press 7 to terminate a program "<<endl;
	cout<<"Enter an option "<<endl;
	cin>>ch;
	switch(ch)
    {
    	case 1:
    		cout<<"enter number of element you want to enter"<<endl;
    		cin>>num;
    		if(num<=10)
    		for(int i=0;i<num;i++)
    		{
    			cout<<"enter value ";
    			cin>>n.data;
    			l1.insertAtstart(n.data);
    			
    			
			}
			else 
			cout<<"you can enter maximum 10 numbers in list"<<endl;
			break;
		case 2:
			cout<<"enter number of element you want to enter"<<endl;
    		cin>>num;
    		cout<<"enter data refers location where you want to enter value  "<<endl;
    		cin>>refdata;
    		for(int i=0;i<num;i++)
    		{
    			cout<<"enter value ";
    			cin>>n.data;
    			l1.insertAtmid(n.data,refdata);
    			
			}
			break;	
		case 3:
			cout<<"enter number of element you want to enter at last"<<endl;
    		cin>>num;
    		for(int i=0;i<num;i++)
    		{
    			cout<<"enter value ";
    			cin>>n.data;
    			l1.insertAtend(n.data);
    			
    		}
			break;
		case 4:
			cout<<"enter a number you want to search "<<endl;
			cin>>num;
		l1.search(num);


			
			break;
		case 5:
			cout<<"enter number you want to delete "<<endl;
			cin>>n.data;
		
			l1.remove(n.data);
		 
		 
		 break;
		 case 6:
		 	l1.traverse();
		 	break;
		case 7:
			cout<<"----------EXIT---------"<<endl;
			break;
		default:
			cout<<"INVALID OPTION"<<endl;
			
			
	}
	}while(ch!=7);
	return 0;
}


