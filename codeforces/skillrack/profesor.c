#include<stdio.h>
int main(){
    int n,m,hour,min,hour1,min1,count=0;
    scanf("%d %d",&n,&m);
    scanf("%d:%d",&hour,&min);
    for(int itr=0;itr<n;itr++){
        scanf("%d:%d",&hour1,&min1);
        if(hour1<hour)
            count++;
        else if(hour1 == hour && min1 <=min)
            count++;
    }
    printf("%s",(count>=m)?"No":"Yes");
    return 0;
}
