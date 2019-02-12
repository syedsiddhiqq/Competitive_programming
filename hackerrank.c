#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
      char str[1000];
      scanf("%s",str);
      char test[] = "hackerrank";
      int count = 0,itr2=0;
      for(int itr1=0;test[itr1]!='\0';itr1++){
        while(itr2<strlen(str)){
          if(str[itr2] == test[itr1]){
            count++;
            itr2++;
            break;
          }else{
            itr2++;
          }
        }
      }
      if(count == 10){
        printf("YES");
      }else
      printf("NO");
    }
    return 0;
}
