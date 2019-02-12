#include<stdio.h>

int findpower(int number,int power){
  int result=1;
  if(power == 0)
    return 1;
  result  = number*(findpower(number,power-1));

 return result;
}

int main(){
  int number,power,result;
  scanf("%d%d",&number,&power);
  result = findpower(number,power);
  printf("%d\n", result);
  return 0;
}
