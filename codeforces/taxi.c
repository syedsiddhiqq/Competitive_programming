#include<stdio.h>
int main(){
  int n,sum=0,temp;
  scanf("%d",&n);
  for(int itr=0;itr<n;itr++){
    scanf("%d",&temp );
    sum = sum+temp;
  }
  printf("%d",(sum%4==0)?sum%4:(sum%4)+1);
  return 0;
}
