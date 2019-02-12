#include<stdio.h>
#include<string.h>
int main(){
  int n,m,itr,jtr;
  scanf("%d %d",&n,&m);
  char first[m][200],second[m][200],word[100];
  for(itr = 0;itr<m;itr++)
    scanf("%s %s",first[itr],second[itr]);
  for(itr = 0;itr<n;itr++){
    scanf("%s",word);
    for(jtr=0;jtr<m;jtr++){
      if(strcmp(first[jtr],word) == 0)
        break;
    }
    (strlen(first[jtr])>strlen(second[jtr]))?printf("%s ",second[jtr]):printf("%s ",first[jtr]);
  }
  return 0;
}
