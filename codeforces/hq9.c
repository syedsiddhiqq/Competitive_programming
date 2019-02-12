#include<stdio.h>
#include<stdlib.h>
int main(){
  char str[100];
  scanf("%s",str);
  int flag = 0;
  for(int itr=0;str[itr];itr++){
    if(str[itr]>32 && str[itr]<127){
      if(str[itr]=='H'||str[itr]=='Q'||str[itr]=='9'){
      flag = 1;
    }
  }
    else{
      printf("NO");
      exit(0);
    }
  }
  printf("%s",(flag == 1)?"YES":"NO");
  return 0;
}
