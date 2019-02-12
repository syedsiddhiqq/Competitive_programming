#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d\n",&n);//getting the n value from the user.
    char s[n],rd[n];
    int i,j,k,len=0,flag=0;
    for(i=0;i<n;i++)scanf("%c",&s[i]);// getting the string from the user


    for(i=0;i<n;i++)rd[i]='0';//assinging a temp array to '0'



    for(i=0;i<n;i++){// this loop is to eliminate the redundant characters for example
      //abbbcdded will output abcde
        flag=0;
        for(j=0;j<n;j++){
          //printf("%c %c\n",s[i],rd[j]);
            if(s[i]==rd[j])flag=1;
        }
        if(flag==0)rd[len++]=s[i];
    }



    printf("len=%d",len);
    int f1,f2,count,max=0;
    char c1,c2;
    //for(i=0;i<len;i++)printf("%d%c ",i,rd[i]);beabeefeab beaf b e
    for(k=0;k<len-1;k++){
        for(j=k+1;j<len;j++){
            c1=rd[k];
            c2=rd[j];
            f1=0;f2=0;count=0;flag=0;printf("c1=%c c2=%c\n",c1,c2);
           printf("\n");
            for(i=0;i<n;i++){
                if(s[i]==c1||s[i]==c2){
                    if(s[i]==c1&&f1==0){f1=1;f2=0;count++;}
                    else if(s[i]==c2&&f2==0){f2=1;f1=0;count++;}
                    else flag=1;
                }
            }
            //printf("\n");
            if(flag==0){if(count>max)max=count;}

        }
    }
    printf("%d",max);

    return 0;
}
