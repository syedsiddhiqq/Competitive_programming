#include<stdio.h>

int main()
{
    unsigned long long int n,i,j,count=0;
    scanf("%llu",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    loop:for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] != -1)
            {
                if(arr[i]==arr[j])
                {
                    arr[j] = arr[i]+arr[j];
                    arr[i] = -1;
                    //count++;
                    goto loop;       
                }
            }
        }
        
    }
   
    for(i=0;i<n;i++)
    {
        if(arr[i] != -1)
        count++;
    }
     printf("%llu\n",count);
    for(i=0;i<n;i++)
    {
        if(arr[i] != -1)
        printf("%d ",arr[i]);
    }
    
    return 0;
}
