#include<stdio.h>
int main(){
  int n,sum=0,temp;
  scanf("%d",&n);
  for(int itr=1;itr<=n;itr++){
    temp = (itr%2==1)?-itr:itr;
    //printf("%d",temp);
    sum += temp;
  }
  printf("%d",sum);
  return 0;
}
