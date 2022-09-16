/* constructor chaining : combination of inheritance and constructor*/
/*polymorphism : one name mutiple form
-->aquiring more than one form.
types of polymorphism:
1.runtime(function over riding)
2.compile time
        -->function overloading
        -->constructor overloading
        -->operator overloading
runtime polymorphism(function over riding)
function over riding: when the prototype( return type,parameter,function name) 
of the function are same then it is known as func over ridding

-->the function of the derived class overrides the function of the parent class.
*/
#include<iostream>
using namespace std;
class A{
    public:
A(){
    cout<<"inside constructor A"<<endl;
}
virtual void show(){
    cout<<"in func of A"<<endl;
}
};

class B:public A{
 public:
B(){
    cout<<"inside constructor B"<<endl;
}
void show(){
    cout<<"in func of B"<<endl;
}
};
class C:public B{
 public:
C(){
    cout<<"inside constructor C"<<endl;
}
void show(){
    cout<<"in func of C"<<endl;
}
};
int main(){
    C c;
    B b;
    A aa;
    A *a =&b;
    
    // c.show();
    // b.show();
    a->show();


}