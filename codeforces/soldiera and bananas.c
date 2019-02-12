#include<stdio.h>

int main(){
  int initial,total_dollars,num_of_bananas,itr,sum=0,result;
  scanf("%d %d %d",&initial,&total_dollars,&num_of_bananas);
  for(itr=1;itr<=num_of_bananas;itr++){
    sum+=(initial*itr);
  }
  result = sum-total_dollars;
  result = (result<0)?0:result;
  printf("%d",result);
  return 0;
}
