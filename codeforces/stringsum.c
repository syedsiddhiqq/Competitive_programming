#include<stdio.h>

int main(){
  char str[10000],temp;
  scanf("%s",str);
  int itr1,itr2;
  for(itr1=0;str[itr1]!='\0';itr1+=2){
    for(itr2=itr1+2;str[itr2]!='\0';itr2+=2){
      if(str[itr1]>str[itr2]){
        temp = str[itr1];
        str[itr1] = str[itr2];
        str[itr2] = temp;
      }
    }
  }
  printf("%s",str);
  return 0;
}
