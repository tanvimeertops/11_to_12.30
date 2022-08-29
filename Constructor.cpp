/*Constructor is a special member function.
-->Characteristics of constructor.
1. constructor name should be same as class name.
2. no return type is required in constructor.
3. constructor will be invoked automatically whenever the object is created.
-->Types of constructor
1. Default (no parameter)
2. Parameterized (with parameter)
3. Copy(object as argument) //cloning of object.

*/
/*volume of box:(lxbxh) using default constructor */
#include<iostream>
using namespace std;
 class Constructor{
private:
int l,b,h;
public:
Constructor(){
    cout<<"inside default constructor"<<endl;
    l=10;
    b=20;
    h=30;
}
void volume(){
    cout<<"volume of box:"<<l*b*h;
}
};

int main(){
    Constructor dc;
    dc.volume();
}