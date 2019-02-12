#include<stdio.h>
//fuck
int main()
{   
    int n,a,b,i,empty=0,jury=0,total;
    scanf("%d%d%d",&n,&a,&b);
    char str[2000000];
    scanf("%s",str);
    total = a+b;
    while(str[i] != '\0')
    {
        if(str[i]=='*')
        jury++;
        else
        empty++;
        i++;
    }
    
    if(total<empty)
    {
        printf("%d",total);
    }
    else
    {
        printf("%d",empty);
    }
    
    return 0;
}

