#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,i,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
   //printf("%d",sum);
    for(i=0;i<n;i++)
    {   
        temp = temp + arr[i];
        if(temp>=sum/2)
        {
            printf("%d",i+1);
            exit(0);
        }
    }
    return 0;
}
