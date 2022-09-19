/*Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
#define N 2
class matrix{
    int a[10];
public:
void accptValue(){
    for (int i = 0; i < N; i++)
    {
        cout<<"Enter val:";
        cin>>a[i];
    }
}
void display(){
    for (int i = 0; i < N; i++)
    {
        /* code */
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void operator+(matrix m){
    int temp[10];
    for (int i = 0; i < N; i++)
    {
        temp[i]=a[i]+m.a[i];
        cout<<a[i]<<"+"<<m.a[i]<<endl;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<<"sum:"<<temp[i]<<endl;
    }
    
   
}

};
int main(){
    matrix val1;
    matrix val2;
    val1.accptValue();//1 2
    val2.accptValue();//3 4
    val1.display();
    val2.display();
    val1+val2;
}