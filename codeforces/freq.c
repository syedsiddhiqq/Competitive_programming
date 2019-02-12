#include<stdio.h>
int main(){
  int size,max=0,index=0;
  scanf("%d",&size);
  int arr[size],freq[size][10];
  for(int itr = 0;itr<size;itr++){
    scanf("%d", &arr[itr]);
  }
  for(int itr=0;itr<size;itr++){
    freq[itr][0] = arr[itr];
    freq[itr][1] = 0;
    for(int itr1=0;itr1<size;itr1++){
      if(arr[itr1] == freq[itr][0]){
        freq[itr][1]++;
        arr[itr1] = -9999;
      }
    }
  }
  for(int itr=0;itr<size;itr++){
    max = 0;
    for(int itr1=0;itr1<size;itr1++){
      if(max<freq[itr1][1] && freq[itr1][0]!=-9999){
        max = freq[itr1][1];
        index = itr1;
        }
    }
    freq[index][1] = -9999;
    for(int itr2=0;itr2<max;itr2++)
      printf("%d ",freq[index][0]);
  //  printf("%d ",max);
  }
  return 0;
}
