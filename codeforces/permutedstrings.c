#include<stdio.h>
int main()
{
	int c,i;
	int alp[26]={0};
	for(i=0;i<3;i++)
	{
		c=getchar();
		while(c!='\n')
		{
			alp[c-65]++;
			c=getchar();
		}
	}
	for(i=0;i<26;i++)
	{
		if(alp[i]%2!=0)
		{
			printf("NO\n");
			break;
		}
	}
	if(i==26)
		printf("YES\n");
	return 0;
}
