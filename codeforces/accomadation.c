
#include<stdio.h>
int main(){
  int n,p,q,count=0;
  for(scanf("%d",&n);n--;){
    scanf("%d %d",&p,&q);
    (q-p>1)?count=count+1:count;
  }
  printf("%d",count);
  return 0;
}
