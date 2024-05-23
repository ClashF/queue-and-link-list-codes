#include <iostream>
using namespace std;

/* run this program using thde console pauser or add your own getch, system("pause") or input loop */
struct data
{
	int ele;
	int priority;
	
};
class queue
{
private:
	
	data *que;
	int size;
	int front;
	int rear;
	int count;
public:
	queue(int s)
	{
		size=s;
		front=0;
		rear=-1;
		count=0;
		que=new data[size];
	}
	
	~queue()
	{
		delete[] que;
	}
	bool isfull()
	{
		if(count==size)
		return 1;
		else
		return 0;
	}
	bool isempty()
	{
		if(count==0)
		return 1;
		else
		return 0;
	}
	void enqueue(data a)
	{
		if (! isfull())
		{
			if(rear==-1)
			{
				rear++;
				que[rear]=a;
				count++;
			}
			else
			{ rear++;
			int loc =rear;
			for(int i=0;i<rear;i++)
			{
				if (a.priority>que[i].priority)
				{
					loc=i;
					for(int j=rear;j>loc;j--)
					{
						que[j]=que[j-1];
					}
				break;
				}
			}
				que[loc]=a;

				count++;	
			}
		
		}
		else 
		cout<<"Queue is full"<<endl;
		
	}
	void dequeue()
	{
		cout<<que[front].ele<<" is removed with priorit "<<que[front].priority<<endl;
		cout<<"or "<<frontva().ele<<"removed"<<endl;
		front++;
		count--;
	}
	data frontva()
	{
		return que[front];
	}
void display()
		{
		if (! isempty())
		{
			for(int i=0;i<=count;i++)
			{
				cout<<que[i].priority<<" "<<que[i].ele<<endl;
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
	data x;
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
			cout<<"Enter value as well as its priority to push in queue"<<endl;
			cin>>x.ele>>x.priority;
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
