
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int len;
		scanf("%d",&len);
		char str[1000];
		fgets(str,1000,stdin);
		printf("%s",str);
	}
	return 0;
}

