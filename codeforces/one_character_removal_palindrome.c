#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	int len=strlen(str);
	int ans=0,i,j;
	for(i=0,j=len-1;i<j;i++,j--) if(str[i]!=str[j])
		ans++;
	if(ans==1) printf("YES");
	else if(ans>1) printf("NO");
	else if(ans == 0 && len&1) printf("YES");
	else printf("NO");
	return 0;
}
