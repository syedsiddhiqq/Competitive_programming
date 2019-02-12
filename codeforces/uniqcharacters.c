#include<stdio.h>

int main(){
  char ch;
  int freq[26]={0},count;
  while((ch=getchar())!='\n'){
    freq[ch-'a']++;
  }
  for(int itr=0;itr<26;itr++){
    if(freq[itr]!=0)  
      count++;
  }
  return 0;
}
