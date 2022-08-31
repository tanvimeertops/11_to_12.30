/*Inheritance : creating one class from an existing class.
->Aqquiring the functionality of other of class.
->object will made for child class only.
parent/base/super
child/derived/sub
Advantage of inheritance: 
1.code reusability
2.less object creation.
types of inheritance
1.Single
2.multilevel
3.multiple
---->amguity
4.hierarchical
5.hybird(hierarchical+multiple)

*/

/*single inheritance*/
#include<iostream>
using namespace std;
class A{
protected:
int a,b;
public:

void sum(int x,int y){
    a=x;
    b=y;
    cout<<a<<"+"<<b<<":"<<a+b<<endl;
}
};
class B:public A{

public:
B(int x=0,int y=0){
    a=x;
    b=y;
}
void sub(){
    cout<<a<<"-"<<b<<":"<<a-b;
}

};

int main(){
B b(20,10);
b.sum(100,10);
b.sub();
}