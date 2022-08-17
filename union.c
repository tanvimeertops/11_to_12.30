/*union is a user defined data type in which all the data shares same memory 
location.

*/
#include<stdio.h>
#define n 3
union student
{
    int roll_no;
    char name[100]; // string literal
    int sem;
    char branch[100];
}s;

void main(){
    
    printf("\nEnter name:");
    scanf("%d",&s.roll_no);
        scanf("%s", &s.name);
        
        printf("add of name:%d",&s.name);
        printf("add of roll no:%d",&s.roll_no);
    
}