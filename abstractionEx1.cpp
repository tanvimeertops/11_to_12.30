//calculate area  using abstraction.
#include<iostream>
using namespace std;
class A{
protected:
int dimension;
public:
void getDim(){
    cin>>dimension;
}
virtual void area()=0;
};

class AreaOfSquare:public A{
    public:
void area(){
cout<<"\narea of square:"<<dimension*dimension;
}
};
class AreaOfCircle:public A{
public:
void area(){
    cout<<"\narea of circle:"<<3.14*dimension*dimension;
}
};

int main(){
    AreaOfSquare as;
    cout<<"\nenter the length for sqaure:";
    as.getDim();
    as.area();
    AreaOfCircle ac;
        cout<<"\nenter the radius:";
        ac.getDim();
        ac.area();

}