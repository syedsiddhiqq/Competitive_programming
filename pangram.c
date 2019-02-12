#include<stdio.h>
int main()
{
	int i,n;
scanf("%d",&n);
char a[n];
scanf("%s",a);
int b[26],d;
for(i=0;i<n;i++)
{
if(a[i]>='a'&&a[i]<='z')
	d=a[i]-'a';
else
	d=a[i]-'A';
b[d]=1;
}
for(i=0;i<26;i++)
{if(b[i]!=1)
	{	printf("NO");return 0;}
}
printf("YES");
return 0;
}
