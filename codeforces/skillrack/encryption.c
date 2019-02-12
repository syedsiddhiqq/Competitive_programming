#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char str[201];
    scanf("%s",str);
    int key,len = strlen(str);
    scanf("%d",&key);
    for(int itr=0;str[itr];itr++){
      printf("%c",str[itr]);
        for(int temp=key;key<len;temp+=key){
            printf("%c",str[temp]);
        }
    }
    return 0;
}
