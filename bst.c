#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,temp,flag=0;
        scanf("%d",&n);
        int arr[n],newarr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            newarr[i] = arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(newarr[i]>newarr[j])
                {
                    temp = newarr[i];
                    newarr[i] = newarr[j];
                    newarr[j] = temp;
                }
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]<newarr[j])
                {
                    printf("%d",arr[i]);
                    arr[i] = newarr[j];
                   printf("%d ",newarr[j]);
                    
                    break;
                    
                }
                else if(arr[i] == newarr[j])
                {
                    arr[i] = -1;
                }
            }
            
            
        }
        
        // for(i=0;i<n;i++)
        // printf("%d ",arr[i]);
        printf("\n");
        
        
    }
	
	return 0;
}
