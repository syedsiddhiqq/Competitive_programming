#include <stdio.h>

int main(){
    char s[100];
    int temp;
    for(int itr='a';itr<'z';itr++){
      temp = itr & 32,printf("%d",temp);
    }
    return 0;
}
