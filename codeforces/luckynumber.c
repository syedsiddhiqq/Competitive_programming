#include<stdio.h>
int main(){
  int num,rem,flag = 0,temp,flag1=0;
  scanf("%d",&num);
  temp = num;
  while(num>0){
    rem = num%10;
    if(rem != 4 && rem !=7){
      flag = 1;
    }
    num = num/10;
  }

  if(temp%4 == 0 ||  temp% 7 ==0){
    flag1 = 1;
  }
  //printf("%d",flag);
  if(flag == 0){
    printf("YES");
  }else if(flag == 1 && flag1 == 1){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
}
