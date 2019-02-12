#include<stdio.h>
int main(){
    char str[100],ch,words[20][20];
    scanf("%s",words[0]);
    int words_count=1;
    while((ch=getchar())== ' ')
        scanf("%s",words[words_count++]);
    for(int itr=words_count-1;itr>=0;itr--)
        printf("%s ",words[itr]);
    return 0;
}
