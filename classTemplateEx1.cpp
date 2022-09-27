//sum of any generic two val using class template. 
#include<iostream>
using namespace std;
template<typename T>
class A{
private :
T a,b;
public:
void getData(T x,T y){
    a=x;
    b=y;
}

void sum(){
    cout<<"sum:"<<a+b<<endl;
}
};
int main(){
    A <int>obj1;
    A <string>obj2;
    obj1.getData(12,8989);
    obj2.getData("tops ","tech");

    obj1.sum();
    obj2.sum();

}