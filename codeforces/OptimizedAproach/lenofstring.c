#include<stdio.h>

int naturalnum(int n){
  static int count = 1,sum=0;
  if(count<=n){
    sum = sum + count++;
    naturalnum(n);

  }else{
    return sum;
  }
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",naturalnum(n) );
  return 0;
}
