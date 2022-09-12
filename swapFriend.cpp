/*Write a program to swap the two numbers using friend function without 
using third variable*/
#include<iostream>
using namespace std;

class A{
int a,b;
public:
A(){
    cout<<"enter value 1:";
    cin>>a;
    cout<<"enter value 2:";
    cin>>b;
    cout<<"before swapping: "<<a<<"\t"<<b<<endl;
}
friend void swap(A obj);
};
void swap(A obj){
    obj.a=obj.a*obj.b; //5*2=10  
    obj.b=obj.a/obj.b;//10/2=5
    obj.a=obj.a/obj.b;//10/5=2
    cout<<"after swapping: "<<obj.a<<"\t"<<obj.b<<endl;
}

int main(){
    A obj2;
    swap(obj2);
}