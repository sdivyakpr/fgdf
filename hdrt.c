#include <stdio.h>
#include <math.h>
void main {
    int num,i=0,n;
    scanf("%d",&n);
    int arr[n],sum=0;
     for(i=0;i<n;i++)
     {
     		scanf("%d",&arr[i]);
     if((i+1)%2==0)
       sum+=pow(arr[i],2);
       else
        sum+=pow(arr[i],3);
        }
     printf("%d",sum);
     getch();
    }
