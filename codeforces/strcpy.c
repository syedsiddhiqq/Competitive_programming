#include<stdio.h>
#include<string.h>
void str_cpy(char *str,char *str2){
  int index=0,itr=0;
  for(itr =0;str[itr];itr++){
    str2[itr] = str[itr];
  }
}


int main(){
  char str[] = "Hello";
  char str2[100];
  str_cpy(str,str2);
  printf("%s",str2);
  return 0;
}
