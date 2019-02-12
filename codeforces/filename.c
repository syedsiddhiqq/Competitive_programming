#include<stdio.h>
int main(){
  int length,count=0,ans=0;
  char ch;
  scanf("%d\n",&length);
  while((ch = getchar())!='\n'){
    if(ch == 'x'){
      count++;
    }else{
      count=0;
    }
    if(count>=3){
      ans++;
    }
  }
  printf("%d",ans );
  return 0;
}
