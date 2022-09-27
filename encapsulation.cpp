/* encapsulation : wrapping of data. */
#include<iostream>
using namespace std;
class A{
private:
 int a=10;
 public:
 void shoe(){
    cout<<a;
 }
};

int main(){
    A aa;
    aa.shoe();
}
