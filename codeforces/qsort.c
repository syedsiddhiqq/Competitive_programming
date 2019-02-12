#include<stdio.h>
#include<stdlib.h>

int compare(char *a,char *b){
  if(*a<*b)return 1;
  if(*a==*b)return 0;
  if(*a>*b)return -1;
}
char values[7] = "irshed";
int main(){
  qsort(values,7,sizeof(char),compare);
  for(int itr=0;itr<7;itr++)
    printf("%c ",values[itr]);

  return 0;
}
