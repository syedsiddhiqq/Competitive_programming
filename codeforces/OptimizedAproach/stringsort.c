#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    char stri[105][105];
    char temp[105];
    int flag=1;
    for(i=0;i<n;i++){
        scanf("%s", stri[i]);
    }

    for(i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if(strlen(stri[i])>strlen(stri[j])){
                strcpy(temp,stri[i]);
                strcpy(stri[i],stri[j]);
                strcpy(stri[j],temp);
            }
        }
    }

    for(i=0;i<n-1;i++){
        if(strstr(stri[i+1],stri[i])==NULL){
            flag=0;
        }
    }

    if(flag){
        printf("YES\n");
        for(i=0;i<n;i++){
            printf("%s \n", stri[i]);
        }
    }

    else printf("NO\n");

    return 0;
}
