/*Write a program to find the max number from given two numbers using 
friend function*/
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
    cout<<"value: "<<a<<"\t"<<b<<endl;
    }
    friend void max(A obj);
};
void max(A obj){
    int max;
    max=obj.a>obj.b?obj.a:obj.b;
    cout<<"max number:"<<max<<endl;
}
int main(){
    A obj2;
    max(obj2);
    
}