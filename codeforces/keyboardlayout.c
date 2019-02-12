#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str1[1000],str2[1000],ch;
  scanf("%s\n",str1);
  scanf("%s\n",str2);
  int caps=0,itr,posofchar;
  while ((ch=getchar())!='\n') {
    if(ch >=48 && ch<=57){
      printf("%c", ch);
      continue;
    }
    if(ch<97){
      caps=1;
      ch = ch+32;
    }
    for(itr=0;str1[itr];itr++){
      if(str1[itr] == ch){
        posofchar = itr;
        break;
      }
    }
    if(caps == 1){
      caps = 0;
      ch = str2[posofchar];
      ch = ch-32;
      printf("%c",ch);
    }else{
    ch = str2[posofchar];
    printf("%c",ch);
    }
  }
  return 0;
}
