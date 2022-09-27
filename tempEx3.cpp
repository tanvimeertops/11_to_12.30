/* max of two val using function template.*/
#include<iostream>
using namespace std;
template <typename T>
T sum(T a,T b){
    // if(a>b)
    // return a;
    // else
    // return b;
    return a>b?a:b;
}
int main(){
    cout<<sum<int>(1,2)<<endl;
    cout<<sum<char>('a','w')<<endl;
    cout<<sum<double>(85.3,69.2)<<endl;
    cout<<sum<string>("tops","tech")<<endl;
}