/*int roll_no;
char *name;//string literal
int sem;
char *branch;

Array is collection of data of same type

Structure is a user defined data type which groups the 
different type of data into similar type 
*it stores data into different memory location


//structure with array
*/

#include<stdio.h>
#define n 3
struct student
{
    int roll_no;
    char name[100]; // string literal
    int sem;
    char branch[100];
}s[n];

void main(){
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name:");
        scanf("%s", &s[i].name);
        printf("%d",&s[i].name);
        // printf("\nEnter roll no:");
        // scanf("%d", &s[i].roll_no);
        // printf("\nEnter semester:");
        // scanf("%d", &s[i].sem);
        // printf("\nEnter branch:");
        // scanf("%s", &s[i].branch);
    }

// printf("\nEnter roll no:");
// scanf("%d",&s2.roll_no);
// printf("\nEnter name:");
// scanf("%s",&s2.name);
// printf("\nEnter semester:");
// scanf("%d",&s2.sem);
// printf("\nEnter branch:");
// scanf("%s",&s2.branch);

// printf("\nEnter roll no:");
// scanf("%d", &s3.roll_no);
// printf("\nEnter name:");
// scanf("%s",&s3.name);
// printf("\nEnter semester:");
// scanf("%d", &s3.sem);
// printf("\nEnter branch:");
// scanf("%s",&s3.branch);

for (int i = 0; i < n; i++)
{
    printf("\n------details if student-----");
printf("\nroll no:%d",s[i].roll_no);
printf("\nname:%s",s[i].name);
printf("\nsemester:%d",s[i].sem);
printf("\nbranch:%s",s[i].branch);
}



// printf("\nroll no:%d",s2.roll_no);
// printf("\nname:%s",s2.name);
// printf("\nsemester:%d",s2.sem);
// printf("\nbranch:%s",s2.branch);

// printf("\nroll no:%d",s3.roll_no);
// printf("\nname:%s",s3.name);
// printf("\nsemester:%d",s3.sem);
// printf("\nbranch:%s",s3.branch);
}