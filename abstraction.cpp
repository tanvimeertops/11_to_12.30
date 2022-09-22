/*(data hiding)abstraction is a process 
where only the essential information are given and details are hidden

1.abstract class must have atleast one pure virtual function.
2.pure virtual function will be made from =0 after func name.
3.virtual func will be made in parent only.
4.definition must be there in child class. 
if u forgot to defined in child class then child will becomes
abstract class.
5.Abstract class cannot have a object.
//display that i am in abstract class.*/
#include<iostream>
#include<cmath>
using namespace std;
class A{

public:
virtual void show()=0;
};

class B:public A{
public:
void show(){
    cout<<"inside vitual func";
}
};

int main(){
B b;

b.show();

}