// #include<stdio.h>
//
// int main(a,b,c){
//   scanf("%d%d%d",&a,&b,&c);
//   printf("%d",(a!=1 && b!=1 && c!=1)?a*b*c:(a==1 && b!=1 && c!=1)?((a+b)*c):(a==1 && b==1 && c==1)?a+b+c:a+(b*c) );
//   return 0;
// }
#include<stdio.h>
max(a,b){return a>=b?a:b;}
int main (){
  int a,b,c,n;
  scanf("%d%d%d",&a,&b,&c);
  n=max(max(((a+b)*c),(a*(b+c))),max(((a+b)+c),(a*(b*c))));
  printf("%d",n);
}
