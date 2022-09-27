/*template: it is used to create generic program.
-->we pass datatype in template.
template can be applied to:
1.function
2.class
*/

//sum of any generic two val using function template. 

#include<iostream>
using namespace std;

// void sum(int a,int b){
//         cout<<a+b<<endl;
// }

// void sum(string a,string b){
//         cout<<a+b<<endl;
// }

// void sum(double a,double b){
//         cout<<a+b<<endl;
// }

template <typename T>
T sum(T a,T b){
    cout<<"sum:"<<a+b<<endl;
}
int main(){
    sum<int>(1,2);
    sum<string>("a","s");
    sum<double>(85.3,69.2);
}