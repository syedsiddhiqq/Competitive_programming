#include<stdio.h>
int main(){
  int n,temp,start,exit_,max=0;
  scanf("%d",&n);
  scanf("%d %d",&start,&exit_);
  temp = exit_ + start;
  for(int itr=0;itr<n-1;itr++){
    scanf("%d %d",&start,&exit_);
    if(max<temp)
      max = temp;
    temp = temp - start;
    temp = temp + exit_;

  }
  printf("%d",max );
  return 0;
}
