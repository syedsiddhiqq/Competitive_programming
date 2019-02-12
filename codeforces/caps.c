#include <stdio.h>

int main(){
    char s[100];
    int caps=' ';
    scanf("%s",s);
    for(int i=1;s[i];i++)
        if(s[i]>='a'){
            caps=0;
            break;
        }
    for(int i=0;s[i];i++)
        putchar(caps^s[i]);
    return 0;
}
