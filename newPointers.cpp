#include<iostream>
using namespace std;


//Variables
//Pass by value
//pass by reference



//Pointers
//Pass by value
//pass by reference


void myFun(int *& myInt){

    
    //cout<<"Adress of myInt: "<<myInt<<endl;
    *myInt = *myInt + 1;

    cout<<"Value of myInt is:   "<<*myInt<<endl;

}



int main(){


    int a = 5;

    cout<<"Value stored in a before function call:   "<<a<<endl; // << stream insertion operator or concatenation operation
    cout<<"Address of a:    "<<&a<<endl;

    int *ptr = nullptr; //declaring/defining a pointer
    ptr = &a;


    cout<<"Address stored in ptr:   "<<ptr<<endl;
    cout<<"Address of ptr:    "<<&ptr<<endl;


    int **ptr2 = &ptr;

    cout<<"Address stored in ptr2:   "<<ptr2<<endl;
    cout<<"Address of ptr2:    "<<&ptr2<<endl;

    cout<<"Value pointed by ptr2:   "<<*ptr2<<endl;

/*
    //cout<<ptr<<endl;

    //cout<<"Address of ptr:  "<<&ptr<<endl;

    ptr = &a;

    //cout<<"Address stored in ptr:   "<<ptr<<endl;

    //cout<<"Value pointed by ptr:    "<<*ptr<<endl;


    myFun(ptr);

    cout<<"Value stored in a after function call:   "<<a<<endl;
*/


    return 0;
}