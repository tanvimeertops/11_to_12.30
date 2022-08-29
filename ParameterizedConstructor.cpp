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
/*volume of box:(lxbxh) using paramerized constructor*/
#include<iostream>
using namespace std;
 class ParameterizedConstructor{
private:
int l,b,h;
public:
ParameterizedConstructor(int length,int breadth,int height){
    cout<<"inside parameterized constructor"<<endl;
    l=length;
    b=breadth;
    h=height;
}
void volume(){
    cout<<"volume of box:"<<l*b*h;
}
};

int main(){
    ParameterizedConstructor pc(1,3,5);
    pc.volume();
}