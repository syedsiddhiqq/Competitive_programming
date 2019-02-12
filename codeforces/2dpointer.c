#include<stdio.h>
#include<stdlib.h>
int main(){
  int *arr  = (int *)malloc(sizeof(int)*3*3);
  for(int itr=0;itr<3;itr++){
    for(int itr1=0;itr1<3;itr1++)
      scanf("%d",&((*arr+itr)+itr1));
  }

  for(int itr=0;itr<3;itr++)
    for(int itr1=0;itr1<3;itr1++)
      printf("%d",arr[itr][itr1]);
  return 0;
}
