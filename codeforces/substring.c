#include<stdio.h>
#include<stdlib.h>
int main(){
  char str[100005];
  scanf("%s",str);
  int itr,jtr,flag=0;
  for(itr=0;str[itr];itr++){
    if(str[itr]=='A' && str[itr+1] == 'B'){
      for(jtr = itr+2;str[jtr];jtr++){
        if(str[jtr] == 'B' && str[jtr+1] == 'A'){
          //flag = 1;
          printf("YES");
          exit(0);
        }
      }
      break;
    }
  }
  for(itr=0;str[itr];itr++){
    if(str[itr]=='B' && str[itr+1] == 'A'){
      for(jtr = itr+2;str[jtr];jtr++){
        if(str[jtr] == 'A' && str[jtr+1] == 'B'){
          // flag = 1;
          printf("YES");
          exit(0);
        }
      }
    }
    break;
  }
  printf("NO");
  return 0;
}
