#include<stdio.h>

int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);

    for(i=0;i<n;i++)
    {
        if(a[i]=='x' && a[i+1]=='x' && a[i+2]=='x' )
        j++;
    }
    printf("%d",j);
}
