#include<stdio.h>
#include <stdlib.h>

int main(){
    char str[100];
    scanf("%s",str);
    int n;
    scanf("%d",&n);
    while(n--){
        int temp;
        char ch;
        scanf("%d",&temp);
        //printf("%d",temp-1);
        if(temp-1 == 0){
          if(str[temp-1]<str[temp]){
            ch = str[temp-1];
            str[temp-1] = str[temp];
            str[temp] = ch;
          }
        }
        else if(str[temp-2]<str[temp-1]){
            ch = str[temp-1];
            str[temp-1] = str[temp-2];
            str[temp-2] = ch;
        }else if(str[temp-1]<str[temp]){
            ch = str[temp-1];
            str[temp-1] = str[temp];
            str[temp] = ch;
        }
      }
    printf("%s",str);
    return 0;
}
