#include<stdio.h>
#include<stdlib.h>
#define newsize 5
int main(){
  int *elem,count=1,temp=5;
  char ch;
  elem = (int *)malloc(sizeof(int)*5);
  scanf("%d",&elem[0]);
  while((ch=getchar())==' '){
    scanf("%d",&elem[count]);
    if(count++>=temp){
      elem = realloc(elem,sizeof(int) * (count+newsize));
      temp+=newsize;
    }
  }
  for(int itr=0;itr<count;itr++)
    printf("%d",elem[itr]);
  return 0;
}
