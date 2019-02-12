#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a < b) ? a : b)

int main(){
  char c, actual = 'a';
  int res = 0;
  while((c = getchar()) != '\n'){
    res += MIN(abs(c-actual), 26-abs(c-actual));
    actual = c;
  }
  printf("%d\n", res);
}
