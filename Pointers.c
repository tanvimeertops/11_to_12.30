/*
pointers point to address of variable.
WAP to find reverse of string using recursion */
#include<stdio.h>
void stringrev(char *ptr) 
{

   if(*ptr){
    //ptr++; 
   stringrev(ptr+1) ;
    printf("\n%c",*ptr);
    //printf("%p",ptr);
   } 
}

void main(){
   
char ptr[]="hello";//string literal
/*it will store the data address wise*/
stringrev(ptr);


}