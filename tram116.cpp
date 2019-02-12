/*
* @Author: SyedAli
* @Date:   2019-01-14 13:24:08
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 13:38:07
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,out,in,ans=0,max=-1;
   scanf("%d",&n);
   while(n--)
   {
      scanf("%d %d",&out,&in); 
      ans=ans-out;
      ans=ans+in;
      if(ans>=max) max=ans;
      // printf("%d %d\n",ans,max);

   }
   printf("%d",max);
   return 0;
}