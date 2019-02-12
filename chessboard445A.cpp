/*
* @Author: SyedAli
* @Date:   2019-01-20 13:40:07
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-29 12:57:28
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
using namespace std;

int main(){
	int n,m;
	char ch;
	scanf("%d %d",&n,&m);
	char board[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ch = getchar();
			if(ch == '\n') ch = getchar();
			board[i][j] = ch;
		}
	}
	// F(i,0,n){
	// 	F(j,0,m)
	// 		p(board[i][j])
	// 	printf("\n");
	// }
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(board[i][j] == '.'){
				if((i+j)%2 == 0) board[i][j] = 'B';
				else board[i][j]='W';
			}
			// printf("%c",board[i][j]);
		}
		// printf("\n");
	}
	F(i,0,n){
		F(j,0,m)
			printf("%c",board[i][j]);
		printf("\n");
	}
	return 0;
}