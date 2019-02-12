#include <stdio.h>
int main()
{
  int i=0;
  char b,a[6]="hello";
  while((b=getchar())!='\n')
    if(b==a[i])
      {i++;}
    if(i==5)
    printf("YES");
    else
    printf("NO");
  return 0;
}
