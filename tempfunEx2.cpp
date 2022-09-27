/* max of two val using function template.*/

#include<iostream>
using namespace std;

template<typename T>
T max(T a,T b){
if(a>b)
return a;
else
return b;
}
int main(){
    cout<<max<int>(52,96)<<endl;
    cout<<max<char>('a','t')<<endl;
    cout<<max<double>(78.9666,89.23369)<<endl;
}