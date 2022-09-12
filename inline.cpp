/*functions are used in the program to reuse the code.
->the function which is called more no of time are useful function 
->every time the function is called,the compiler takes more time for execution.
->to overcome this problem the inline function is used 
->In inline function compiler replaces the function call with the respective function code.
drawback of inline functions:

*/
#include<iostream>
#include<cmath>
using namespace std;

class A{
public:
inline int add(int a,int b,int c=0,int d=10){
    
    return (a+b+c+d);
}
};
int main(){
    A a;
    cout<<"square root:"<<a.add(1,2);
}