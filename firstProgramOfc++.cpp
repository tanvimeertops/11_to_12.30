/*c++ is a object oriented language 
-> .cpp
-> compiler->unix
->if program is okay it will return- 0
-> if any error is there in program it will return-1
-> executed by compiler.
-> :: scope resolution opearator.
object oriented concepts:
1.class is a collection data member and member function.
2.object gives permission to use the functionality of class.
3.inheritance
4.polymorphism
5.encapsulation
6.abstraction
*//*
Access specifier: it gives visibility and accessibility
1.public
2.private
3.protected


difference between oop and pop
pop run from top to bottom              oop runs from bottom to top
it works functions                        it works with object
*/
#include<iostream>
using namespace std;
class First{
private:
int a,b;
public:
void sum(){
cout<<"enter A:";
    cin>>a;
    cout<<"\nenter B:";
    cin>>b;
    cout<<endl<<"sum:"<<a+b;
}
};
class Calc{
int a,b;
public:
void sub(int x,int y){
a=x;
b=y;
    cout<<endl<<"sub in class calc:"<<a-b;
}
void sub(){
    cout<<"\nin another sub";
}

};
int main(){
    First fc;
    fc.sum();
    Calc cc;
    cc.sub(10,20);
    cc.sub();
    
} 