#include<stdio.h>

int main(){
  int len;
  scanf("%d\n",&len);
  char ch;
  int anton=0,danik;
  while((ch=getchar())!='\n'){
    if(ch == 'A')
      anton++;
    }
  danik = len -anton;
  if(danik < anton)
    printf("Anton\n");
  else if(danik == anton)
    printf("Friendship\n");
  else
    printf("Danik\n");
  return 0;
}
