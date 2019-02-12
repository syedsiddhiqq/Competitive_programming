#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define newsize 5
int isprime(int num){
    int sqroot = sqrt(num);
    if(num==2){
        return 1;
    }else{
        for(int itr=3;itr<=sqroot;itr+=2){
            if(num%itr==0)
                return 0;
        }
    }
    return 1;
}
int compare(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(){
    int *arr = (int *)malloc(sizeof(int)*5);
    int num_of_elements=1,size = 5;
    char ch;
    scanf("%d",&arr[0]);
    while((ch=getchar())==' '){
        scanf("%d",&arr[num_of_elements]);
        if(num_of_elements++>=size){
            arr = realloc(arr,num_of_elements+newsize);
            size+=newsize;
        }
    }
    qsort(arr,num_of_elements,sizeof(int),compare);
    for(int itr=0;itr<num_of_elements;itr++){
      if(arr[itr]%2!=0 || arr[itr]==2)
            if(isprime(arr[itr])){
                printf("%d ",arr[itr]);
                arr[itr] = -1;
            }

    }
    for(int itr=0;itr<num_of_elements;itr++){
        if(arr[itr]%2!=0 && arr[itr]!=-1){
            printf("%d ",arr[itr]);
            arr[itr] = -1;
        }
    }
    for(int itr=0;itr<num_of_elements;itr++){
        if(arr[itr]!=-1)
            printf("%d ",arr[itr]);
    }
    return 0;
}
