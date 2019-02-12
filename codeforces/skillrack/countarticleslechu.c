
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char str[3][4]={"a","an","the"},s[100],c,in;
   int i,count=0,itr=0;
   scan f("%s",s);
   for(i=0;i<3;i++)
   {
       if(strcmp(str[i],s)==0)
       {

           count++;
       }
   }
   in=getchar();
   while(in==' ' || in==',' || in=='.')
   {
       in=getchar();
       while(in!=',' && in!=' ' && in!='.' && in!='\n')
       {
           s[itr]=in;
           itr++;
           in=getchar();
       }
       s[itr]='\0';
        itr=0;
       for(i=0;i<3;i++)
       {
           if(strcmp(str[i],s)==0)
           {
              // printf("%s\n",s);
               count++;
           }
       }
   }
   printf("%d",count);
}
