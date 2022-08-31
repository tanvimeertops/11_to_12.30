/*multi level inheritance*/
#include<iostream>
using namespace std;
class MyClass{
protected:
int a,b;
public:

void sum(int x,int y){
    a=x;
    b=y;
    cout<<a<<"+"<<b<<":"<<a+b<<endl;//40
}
};
class MyChild:public MyClass{

public:
MyChild(int x=0,int y=0){
    a=x;
    b=y;
}
void sub(){
    cout<<a<<"-"<<b<<":"<<a-b<<endl;//90
}

};
class MyGrandChild:public MyChild{
public:
void multi(){
    cout<<a<<"*"<<b<<":"<<a*b<<endl;//1000
}
};

int main(){
MyGrandChild cc;
cc.sum(10,30);
cc.sub();
cc.multi();
}