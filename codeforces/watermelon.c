#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  printf("%s",(n%2==0 && n>2)?"YES":"NO");
  return 0;
}
