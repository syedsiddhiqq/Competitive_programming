#include<stdio.h>
#include<stdlib.h>
#define newsize 5
int main(){
    int *arr = (int *)malloc(sizeof(int)*5),num_of_elements=1,maxsize=5,product=1;
    scanf("%d",&arr[0]);
    product *= arr[0];
    char ch;
    while((ch=getchar())==' '){
        scanf("%d",&arr[num_of_elements]);
        product*=arr[num_of_elements];
        if(num_of_elements++>=maxsize){
            arr = realloc(arr,num_of_elements+newsize);
            maxsize+=newsize;
        }
    }
    for(int itr=0;itr<num_of_elements;itr++){
        printf("%d ",product/arr[itr]);
    }
    return 0;
}
