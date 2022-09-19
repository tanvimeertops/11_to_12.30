/*operator overloading
it gives more than one definition to the operator.
except : *, ::, ternary operator, sizeof()

*/

#include<iostream>
using namespace std;
class Sum{
int a,b;
public:
Sum(){

}
Sum(int x,int y){
    a=x;
    b=y;
}
void print(){
cout<<a<<"-"<<b<<endl;
}

Sum operator-(Sum p){
    Sum temp;
    temp.a=a-p.a;
    cout<<a<<"-"<<p.a<<endl;//2+3
    temp.b=b-p.b;
        cout<<b<<"-"<<p.b<<endl;//9+7
    return temp;
}
};
int main(){
    Sum obj1(2,3);//9-2
    Sum obj2(9,7);//7-3
    Sum res=obj2-obj1; //res=obj2.add(obj1)
    res.print();
}