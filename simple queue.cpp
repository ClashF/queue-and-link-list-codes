#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class queue
{
private:
	
	int *que;
	int size;
	int front;
	int rear;
public:
	queue(int s)
	{
		size=s;
		front=-1;
		rear=-1;
		que=new int[size];
	}
	~queue()
	{
		delete[] que;
	}
	bool isfull()
	{
		if(rear==size-1)
		return 1;
		else
		return 0;
	}
	bool isempty()
	{
		if(rear==-1||front==size)
		return 1;
		else
		return 0;
	}
	void enqueue(int val)
	{
		if (isempty())
		{
			que[++rear]=val;
			front++;
		}
		else if (! isfull())
		{
			++rear;
			que[rear]=val;
		}
		else 
		cout<<"can't insert more bcz Queue is full"<<endl;
		
	}
	
	void dequeue()
	{
		if(! isempty())
		{
			cout<<frontval()<<"is removed "<<endl;
			front++;//front=1
			
		
		}
		else 
		cout<<"Que is empty"<<endl;
	}
	int frontval()
	{
		if (! isempty())
		{
			return que[front];
		}
	}	
		void display()
		{
		if (! isempty())
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<que[i]<<" ";
			}
			cout<<endl;
		}	
		else 
		cout<<"your queue is empty"<<endl;
		}
};
int main(int argc, char** argv) {
	int s;
	cout<<"enter size of queuee"<<endl;
	cin>>s;
	queue q(s);
	int x;
	int opt;
do {	
		cout<<"*************MENU****************"<<endl;
	cout<<"Press 1: Insert value in queue"<<endl;
	cout<<"Press 2: delete value in queue"<<endl;
	cout<<"Press 3: display queue"<<endl;
	cout<<"Press 4: exit"<<endl;

	cout<<"Enter your option "<<endl;
	cin>>opt;
	switch(opt)
	{
		case 1:
			cout<<"Enter value to push in queue"<<endl;
			cin>>x;
			q.enqueue(x);
			break;
		case 2:
			cout<<"Calling dequeue"<<endl;
			q.dequeue();
		
			break;
		case 3:
			cout<<"displaying queue "<<endl;
			q.display();
			break;
		case 4:
			cout<<"***********Exit*************"<<endl;
			break;
		default:
			cout<<"invalid option "<<endl;
					break;
	}
	}while(opt!=4);

	
	
	return 0;
}
