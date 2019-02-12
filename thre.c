#include<stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    int n,k,count1=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int x=0;x<n;x++)
    {
      scanf("%d",&arr[x]);

    }
    for(int x=0;x<n;x++)
    {
      int sum=0,count=0;
    while(sum<=arr[x])
    {
      sum +=k;
      count++;
    }
  count1 = count1+count;


  }
 printf("%d",count1+2 );
}

}
