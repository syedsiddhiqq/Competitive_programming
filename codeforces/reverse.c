#include <stdio.h>
#include<string.h>
int main ()
{
char s[200];
scanf("%s",s);

for ( int j=0,count=0; j<strlen(s); j++)
{
if ( s[j]=='W' && s[j+1]=='U' && s[j+2]=='B'){
   j+=2; if(count) printf(" ");
 }else{
   printf("%c",s[j]);
   count++;
 }
}
return 0;
}
