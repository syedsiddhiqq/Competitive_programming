// #include<stdio.h>
// int main(){
//   int row,itr,sum=0,val;
//   scanf("%d",&row);
//   for(itr=0;itr<row*3;itr++){
//     scanf("%d",&val);
//     sum+=val;
//   }
//   printf("%s",(sum==0)?"YES":"NO");
//   return 0;
// }

#include <stdio.h>
int main (){int n,a=0,b=0,c=0,p,q,r;
scanf("%d",&n);
while(n--){
scanf("%d%d%d",&p,&q,&r);
a+=p,b+=q,c+=r;}
printf("%s",(a==0&&b==0&&c==0)?"YES":"NO");}
