#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strreverse(char *str){
    char *str1 = (char *)malloc(sizeof(char)*200);
    int count=0;
    for(int itr=strlen(str)-1;itr>=0;itr--){
        str1[count++] = str[itr];
    }
    str1[count]='\0';
    return str1;
}
int main(){
    char str[201],words[20][20];
    scanf("%s",str);
    int key,count=0,words_count=0,cptr=0,rptr=0;
    scanf("%d",&key);
    for(int itr=0;str[itr];itr++){
        words[words_count][count++] = str[itr];
        if(count == key)
            words[words_count++][count]='\0',count=0;
    }
    for(int itr=0;itr<words_count;itr++){
        if(itr%2!=0)
            strcpy(words[itr],strreverse(words[itr]));
    }
    for(int itr=0;str[itr];itr++){
        printf("%c",words[rptr++][cptr]);
        if(rptr%words_count == 0){
            rptr = 0;
            cptr++;
        }
    }
    return 0;
}
