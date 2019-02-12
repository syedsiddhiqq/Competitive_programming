#include<stdio.h>

int len(int number){
  static int count = 0;
  if(number>0){
    count++;
    len(number/10);
  }else{
    return count;
  }
}
int main(){
  int number;
  scanf("%d",&number);

  printf("%d",len(number));
  return 0;
}
