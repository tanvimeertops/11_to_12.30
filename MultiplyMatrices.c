/*
multiplication of matrix is valid only if 
the column of 1st matrix is equal to the row of  
second matrix
* the row of 1st matrix and the column of 2nd matrix 
is the size of the solution matrix. 
*/
#include<stdio.h>
void main(){
  int a[2][3]={{2,5,1},{3,-5,2}};
int b[3][1]={{3},{-2},{4}};
int c[2][1],sum=0;
for (int i = 0; i<1; i++)
{
   for (int j= 0; j<2; j++)
   {
    for (int  k= 0; k<3; k++)
    {
        sum+=a[j][k]*b[k][i];
    }
    c[j][i]=sum;
    sum=0;
   } 
}
for (int i = 0; i<2; i++)
{
    for (int j= 0; j<1; j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}


}