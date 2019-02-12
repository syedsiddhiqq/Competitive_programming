#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
int m,n;
for(int i=0;i<t;i++)
{
  scanf("%d%d",&m,&n);
  int arr[m];
  int arr2[n];
  for(int a=0;a<m;a++)
  {
    scanf("%d",&arr[a]);
  }
  for(int b=0;b<n;b++)
  {
    scanf("%d",&arr2[b]);
  }
int arr3[m],g=0;
for(int x = 0;x<m-n;x++)a
{
  arr3[x] = 0;
}
for(int x = m-n;x<m;x++)
{
  arr3[x] = arr2[x]
}

int arr1[m],carry=0;
for(i=m-1;i>=0;i--)
{
  arr1[i]=arr[i]+arr2[i]+carry;

if(arr1[i]/10>0 && i!=0)
{
carry = arr1[i]/10;
//printf("%d",carry);
  arr1[i] = arr1[i]%10;
}
//printf("%d",arr1[i]);

}
for(int i=0;i<m;i++)
{
  printf("%d",arr1[i]);
}
return 0;
}
}
