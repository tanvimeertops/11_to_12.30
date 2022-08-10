//2. function with parameter and without return type.

#include<stdio.h>
void sum(int a,int b);
void main(){
    int num1,num2;
    printf("Enter num1 and num2:");
    scanf("%d %d",&num1,&num2);
sum(num1,num2);//call by value/pass by value

}
void sum(int a,int b){
    printf("sum:%d",a+b);
}