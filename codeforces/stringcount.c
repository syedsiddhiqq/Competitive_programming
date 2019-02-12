#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int num,itr,max=-1,count=0,jtr;
  scanf("%d",&num);
  char teams[num][11];
  char *temp = (char*)malloc(sizeof(char)*1000);
  for(itr=0;itr<num;itr++){
    scanf("%s",teams[itr]);
  }

  for(itr=0;itr<num;itr++){
  //  max = 0;
    count=0;
    for(jtr = itr+1;jtr<num;jtr++){
      if(strcmp(teams[itr],teams[jtr]) == 0){
        count++;
      }
    }
    if(max<count){
      max = count;
      temp = teams[itr];
    }
  }
  printf("%s",temp);
  return 0;
}
