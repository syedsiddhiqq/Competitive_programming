#include<stdio.h>

int checkdistinct(int num){
  int arr[10]={0};
  while(num>0){
    arr[num%10]++;
    num = num/10;
  }
  for(int itr=0;itr<10;itr++){
    if(arr[itr]>1){
      return 0;
    }
  }
  return 1;
}

int finddistinctyear(int start){
  for(int itr = start+1;;itr++){
    if(checkdistinct(itr)){
      return itr;
    }
  }
}

int main(){
  int year;
  scanf("%d",&year);
  printf("%d",finddistinctyear(year));
  return 0;
}
