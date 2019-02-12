#include<stdio.h>
#include<stdlib.h>
int checkVowel(char ch){
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  char str[1000];
  scanf("%s",str);
  for(int itr=0;str[itr];itr++){
    if((!checkVowel(str[itr]) && checkVowel(str[itr+1])) || str[itr]=='n' || (checkVowel(str[itr]))){
      continue;
    }else{
      printf("NO");
      exit(0);
    }
  }
  printf("YES");
  return 0;
}
