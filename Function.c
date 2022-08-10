/* function is block of code where bussiness logic is 
written. 
types of functions
1.user defined
2.predefined/library eg:scanf,printf,for,if,gets.etc
advantage of func
-> reusability
[return type][func name]()
characteristics
1. every func should have a return type.
2. it should always return a value as per 
the return type
properties of functions
1. function without parameter and without return type.
2. function with parameter and without return type.
3. function without parameter and with return type.
4. function with parameter and with return type.
stages of function
1. declaration eg: void sum();
2. defination eg: void sum(){}
3. call eg: sum();
void is a datatype which itself returns nothing.
*/
//1. function without parameter and without return type.
#include<stdio.h>
void sum();
void main(){
sum();
sum();
}
void sum(){
    int a=10,b=20;
    printf("sum:%d",a+b);
}