/*functions are used in the program to reuse the code.
->the function which is called more no of time are useful function 
->every time the function is called,the compiler takes more time for execution.
->to overcome this problem the inline function is used 
->In inline function compiler replaces the function call with the respective function code.
*/

#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
A(){
    cout<<"enter value 1:";
    cin>>a;
    cout<<"enter value 2:";
    cin>>b;
    cout<<"value: "<<a<<"\t"<<b<<endl;
}
inline void sum(){
    cout<<"sum :"<<a+b<<endl;
}
};

int main(){
    A obj;
    obj.sum();
}