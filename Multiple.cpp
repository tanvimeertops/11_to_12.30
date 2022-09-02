/*mutiple inheritance with two parent one child.
Ambiguity: when child is confused which method to call when there is
same name of functions in parent class.
*/
#include<iostream>
using namespace std;
class A{
public:
void showOne(){
    cout<<"in class A"<<endl;
}
};
class B{
public:
void show(){
    cout<<"in class B"<<endl;
}
};
class C:public A,public B{
public:
void display(){
 cout<<"in class C "<<endl;
 }
};
int main(){
C c;
c.show();
c.display();
c.showOne();

}