/*Constructor is a special member function.
-->Characteristics of constructor.
1. constructor name should be same as class name.
2. no return type is required in constructor.
3. constructor will be invoked automatically whenever the object is created.
-->Types of constructor
1. Default (no parameter)
2. Parameterized (with parameter)
3. Copy(object as argument) //cloning of object.

-->Constructor overloading same name different arguments


Destructor destruct the object.
c++ we have to destruct a object manually
object will stored in stack memory.


-->copy constructor cannot be overloaded.
*/
/*volume of box:(lxbxh) */
#include<iostream>
using namespace std;

class ConstructorOverloading
{
private:
   int l,b,h,vol;
public:
    ConstructorOverloading();
    ConstructorOverloading(int length,int breadth,int height);
    ConstructorOverloading(ConstructorOverloading &cc);
    ~ConstructorOverloading();
    void volume();
};

ConstructorOverloading::ConstructorOverloading()
{
cout<<"Default constructor"<<endl;
l=1;
b=2;
h=3;
}
ConstructorOverloading::ConstructorOverloading(int length,int breadth,int height){
    cout<<"Parameterized constructor"<<endl;
    l=length;
    b=breadth;
    h=height;
}

ConstructorOverloading::ConstructorOverloading(ConstructorOverloading &cc){
    cout<<"inside copy constructor"<<endl;
    l=cc.l;
    b=cc.b;
    h=cc.h;
   
}
void ConstructorOverloading::volume(){
vol=l*b*h;
cout<<"volume of box:"<<vol<<endl;
}
ConstructorOverloading::~ConstructorOverloading()
{
    cout<<"destructor for :"<<vol<<endl;
}

int main(){
ConstructorOverloading dc;
dc.volume();//6
ConstructorOverloading pc(4,5,6);
pc.volume();//120
ConstructorOverloading cc(dc); //cc(dc) 
cc.volume();

}