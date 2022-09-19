/*Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
#include<string.h>
using namespace std;
#define N 2
class matrix{
    char a[10];
public:
void accptValue(){
    
        cout<<"Enter val:";
        gets(a);
    
}
void display(){
   
        /* code */
       puts(a);
    
}

void operator+(matrix m){
    strcat(a,m.a);
    cout<<a;
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