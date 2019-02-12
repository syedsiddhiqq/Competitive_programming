#include<stdio.h>

int main(){
  char ans[1000]={""},ch;
  int freq_of_char[256]={0};
  int kval,itr,index=0,numoftimes;
  scanf("%d\n",&kval);
  //get the characters and find the freq of each character
  while((ch=getchar())!='\n')
    freq_of_char[ch]++;

  for(itr='a';itr<='z';itr++){
    if(freq_of_char[itr]%kval){
      printf("-1");
      return 0;
    }
    numoftimes = freq_of_char[itr]/kval;
    while(numoftimes--){
      ans[index++] = itr;
    }
  }

  while(kval--){
    printf("%s",ans);
  }
  return 0;
}
