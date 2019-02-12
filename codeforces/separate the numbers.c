#include<stdio.h>

int getLength(int num){
  int len=0;
  while(num>0){
    num = num/10;
    ++len;
  }
  return len;
}
int main(){
  int n,power=10,len,count=0,temp,temp1;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int itr=0;itr<n;itr++){
    len = getLength(arr[i]);
    temp2 = arr[i];
    LOOP:
    temp = temp2%power;
    while(count<len-1){
      temp1 = temp2/power;
      temp1 = temp1%power;
      if(temp-temp1 == 1){
        count++;
        temp2 = temp2/power;
        goto LOOP;
      }
    }
  }


  return 0;
}
