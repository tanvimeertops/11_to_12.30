#include<stdio.h>
#define N 8
void main(){
    int a[]={5,2,7,5,7,7,5,1};
    int count;
    int freq[100];
    for (int i = 0; i < N; i++)
    {
        count = 1;
        for (int j = i + 1; j < N; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (freq[i] != 0)
            printf("\n%d comes %d times", a[i], freq[i]);
    }
}