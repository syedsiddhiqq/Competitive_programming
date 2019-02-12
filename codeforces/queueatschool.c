#include<stdio.h>
#include<stdlib.h>
int main(){
  char str[1000];
  int n,t;
  scanf("%d %d",&n,&t);
  scanf("%s",str);
  for(int itr1=0;itr1<t;itr1++)
    for(int itr=0;str[itr];){
      if(str[itr]=='B' && str[itr+1] =='G'){
        str[itr+1] = 'B',str[itr] = 'G';
        itr = itr+2;
      }else{
        itr = itr+1;
      }
    }
  printf("%s", str);
  return 0;
}
