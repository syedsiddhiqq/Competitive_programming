#include<stdio.h>

int main(){
    char s[101];
    int c[2] = {}, i;
    gets(s);
    for (i = 0 ; s[i] ; ++i)
        ++c[(s[i] & 32) >> 5];
    for (i = 0 ; s[i] ; ++i)
        putchar(c[0] > c[1] ? s[i] & 95 : s[i] | 32);
    return 0;
}
