/*recursion is process where same function call itself.
1. in every looping program we can use recursion.
*/
//factorial of a given no.
#include<stdio.h>

int fact(int f){
    //3*2*1=6
    if (f != 0)
    {
      return (f*fact(f-1));
    }
    else
    {
        return 1;
    }
}
void main(){
printf("factorial:%d",fact(3));
}