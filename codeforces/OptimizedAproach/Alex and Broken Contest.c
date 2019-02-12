#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int count=0,i;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='D' && s[i+1]=='a' && s[i+2]=='n' && s[i+3]=='i' && s[i+4]=='l')
			count++;
		if(s[i]=='O' && s[i+1]=='l' && s[i+2]=='y' && s[i+3]=='a')
			count++;
		if(s[i]=='S' && s[i+1]=='l' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='a')
			count++;
		if(s[i]=='N' && s[i+1]=='i' && s[i+2]=='k' && s[i+3]=='i' && s[i+4]=='t' && s[i+5]=='a')
			count++;
		if(s[i]=='A' && s[i+1]=='n' && s[i+2]=='n')
			count++;
	}
	if(count==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}
