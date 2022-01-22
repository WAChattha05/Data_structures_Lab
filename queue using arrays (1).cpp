#include<iostream>
using namespace std;

class queue
{
	private:
		int *rear;
		int *front;
		int *que;
		int*temp;
		
	public:
		int value;
		int size ;
		queue()
		{		
			cout<<"enter size : ";
			cin>>size;
			que = new int [size];	
			rear = front = que ;			
		}
		void enque()
		{
		if (rear == NULL)
		{
			rear  = front  = que;
			cout<<"enter the first elemnt "<<endl;
			cin>>*rear ;
			return ;
			
		}
		if ((front == que) && ( rear == que+(size - 1 )))
        {
            cout << "Queue is full"<<endl ;
            return ;
        }
        if ( rear + 1 == front)
        {
        	cout<<"Queue is full "<<endl;
        	return ;
		}
		if( rear == que+(size - 1 ))
		{
		rear = que;
        cout<<"enter a value : "<<endl;
        cin>>*rear;
        return ;
		}
		rear++;
		cout<<"enter the elemnt "<<endl;
		cin>>*rear;
	}
		
		void deque()
		{	int data;
			if (rear == NULL)
			{
				cout<<"queue is empty ::"<<endl;
				return  ;
			}
			if (front == rear )
			{
				front = rear = NULL;
				return;
			}
			if (front == que +(size)-1)
			{
				front = que;
				return;
			}
				front++;
			}
		void print()
		{
			if (rear == NULL)
			{
				cout<<"queue is empty ::"<<endl;
				return  ;
			}
		temp=front;
		while(temp !=rear){
			if(temp==que+(size-1))
			{
				temp=que;
			}
			cout<<*(temp)<<" "<<endl;
			temp++;
			if (temp == rear)
				cout<<*temp;
					}	
			
		}
};
int main()
{
	queue q;
	q.enque();
	q.enque();
	q.enque();
	q.enque();
	q.print();
	q.deque();
	q.deque();
	q.print();
	
		
}
