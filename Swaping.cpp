#include<iostream>
using namespace std;

int sum(int a, int b){

     int c=a+b;
     return c;
}
//Call by reference using pointers 
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//swap er bepar tar jonno pointer use korte hobe 

//Call by reference using C++ reference variables 
void swapReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4,y=7;
    cout<<"The value of x is "<<x<< "and the value of y is "<<y<<endl;
    //swap(&x,&y);
    //cout<<"The value of x is "<<x<< "and the value of y is "<<y<<endl;
    swapReference(x,y);
cout<<"The value of x is "<<x<< "and the value of y is "<<y<<endl;

   
return 0;
}
