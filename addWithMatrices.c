/*
matrix: 2D Array
Add/Sub: valid only if size of one matrix equals to the 
size of another matrix.
*/
#define n 3
#define m 2
#include<stdio.h>
void main(){
    int a[n][m]={{1,2},{3,4},{2,6}};
    int b[n][m]={{5,2},{8,9},{3,6}};
    int c[n][m];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
        
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}