#include<stdio.h>

int main()
{
    int n,i,count,j;
    scanf("%d",&n);
    int arr[n],freq[n];
    
    //getting array elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    
    //counting frequency
    for(i=0;i<n;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    
    //printing the frequency
    for(i=0;i<n;i++)
    {
        if(freq[i] != 0)
        {
            printf("The frequency of the element %d is %d\n",arr[i],freq[i]);
        }
    }
    
    return 0;
}
