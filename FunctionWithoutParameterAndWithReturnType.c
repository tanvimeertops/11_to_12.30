//3. function without parameter and with return type.
//function always returns the value to the calling function.
#include<stdio.h>
int sum();
void main(){
printf("sum:%d",sum());
}

int sum(){
    int a=10,b=20;
    return(a+b);
}