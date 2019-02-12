#include <stdio.h>
#include<string.h>
int main(){
  char str[100] = "Irshed love You baby bitch";
  int len = strlen(str);
  char *ptr = str;
  for(int i=len-1;i>=0;i--){
    if(str[i] == ' '){
      printf("%s",ptr+i);
      str[i]='\0';
    }
  }
  printf(" %s",str );
  return 0;
}
