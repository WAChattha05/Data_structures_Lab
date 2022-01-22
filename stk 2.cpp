#include<iostream>
using namespace std;

class list
{
    private:
    int *top;
    int *stk;
    int size;
    int *temp;
    public:
        
        list()
        {
            
            cout<<"input size of array : "<<endl;
            cin>>size;
            top,temp = NULL;
            stk=new int[size];
            //top = stk;
            
            
        }
//        bool list_empty()
//        {
//            if(top == NULL)
//                return true ;
//            else
//                return false;
//            
//        }
//        bool list_full()
//        {
//            if(stk+(size-1 )==top)
//                return true;
//                else
//                return false;
//        }
        void push()
        {
//                if(list_full())
            if(stk+(size)==top)
            {
                cout<<"overflow";
                return ;
            }
                        
//            if(list_empty())
                  
            if(top == NULL)
            {
              top = stk;
              cout <<"Eter value :  "<<endl;
              cin>>*top;  
                return ;
            }
            top++;
            cout <<"Eter value :  "<<endl;
            cin>>*top;    
                    
        }
        
        void pop()
        {
        	if(top == NULL)
        	{
        		cout<<"underflow"<<endl;
        		return;
			}
			
			if(top ==stk)
			{
				top = NULL;
				return;
			}
			top--;
			return;			
		}
		void print()
		{
		
			while(top != NULL)
			{
				cout<<*top<<endl;
				pop();
			}
			
		}
};

int main()
{
    list ls;
    ls.push();
    ls.push();
    ls.push();
    ls.push();
    ls.push();
    ls.print();
    ls.pop();
    return 0;
//    ls.list_empty();
//    ls.list_full();    
    
}
