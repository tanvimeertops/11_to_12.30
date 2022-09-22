//calculate the bill as per commercial and residential area.
#include<iostream>
using namespace std;
class bill{
protected:
int unit;
public:
void getunit(){
    cin>>unit;
}

virtual void getBill()=0;
};
class commercialBill:public bill{
public:
void getBill(){
    cout<<"\nbill for commercial:"<<unit*6;
}
};
class residentialBill:public bill{
public:
void getBill(){
    cout<<"\nbill for resditial:"<<unit*4;
}
};
int main(){

    commercialBill cb;
    residentialBill rb;
    cout<<"\nenter unit for your comapny:";
    cb.getunit();
    cout<<"\nenter unit for your house:";
    rb.getunit();

    cb.getBill();
    rb.getBill();
}