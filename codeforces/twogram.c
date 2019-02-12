#include<stdio.h>
#include<string.h>

int main()
{
	int t,max=0,i,j;
	scanf("%d ",&t);
	char a[t],s,c;
	scanf("%s",a);
	for(i=0;i<t-1;i++)
	{
		int count= 0;
		for(j=i+1;j<t-1;j++)
		{
			if(a[i]==a[j]){
			if(a[i+1]==a[j+1])
			count++;
		}
		}
		if(max<=count)
		{
			max=count;
			s=a[i];
			c=a[i+1];
		}
	}
	printf("%c%c",s,c);
}
