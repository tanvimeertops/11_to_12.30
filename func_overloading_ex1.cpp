/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
 Rectangle: length * breadth 
 Triangle: ½ *height* base 
 Circle: Pi * r *r*/
#include<iostream>
using namespace std;
class A{
    public:
void area(int length,int breadth){
    cout<<"area of rectangle: "<<length*breadth<<endl;
}

void area(double height,double base ){
    cout<<"area of traingle:"<<0.5*base*height<<endl;
}

void area(int r){
    cout<<"area of circle:"<<3.14*r*r<<endl;
}
};
int main(){
A a;
a.area(10,20);
a.area(10.2,20.5);
a.area(2);

}