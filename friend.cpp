/*friend function : it can access the private and protected data member of a class 
without using the object of the class.
1. it has to be declared inside class.
2. it has to be defined outside the class
3. it can be called without object of the class.

why friend function:
in special case when the private and protected data member needs to be accessed directly 
without using the object of its class.
 */
/* increement a value using friend function:
before increement value: 5
after increement value:6
*/
#include<iostream>
using namespace std;
class A{
private:
int value;
public:
A(int x){
    value=x;
    cout<<"before increement value:"<<value<<endl;
}
friend void incree(A obj);//declaration
};

void incree(A obj){
    cout<<"after increement value:"<<obj.value+5<<endl;
}
int main(){
    A obj1(3);
    incree(obj1);
}