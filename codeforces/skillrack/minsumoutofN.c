#include<stdio.h>
int compare(int *a,int *b){
    if(*a<*b)return 1;
    if(*a==*b)return 0;
    if(*a>*b)return -1;
}
int main(){
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int itr=0;itr<n;itr++)
        scanf("%d",&arr[itr]);
    qsort(arr,n,sizeof(int),compare);
    for(int itr=0;itr<m;itr++)
        sum+=arr[itr];
    printf("%d",sum);
    return 0;
}
