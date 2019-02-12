//PRZEMYSL ASSERTY

//SPRAWDZ CORNER CASE'Y, MINIMALNE I MAKSYMALNE WEJŚCIE I WYJŚCIE

//MODULO = 1

//while (clock()<=69*CLOCKS_PER_SEC)

#include <bits/stdc++.h>
using namespace std;

const int nax=1000*1007;

int n;

int tab[nax];
int dp[nax][3];

int main()
{
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
		scanf("%d", &tab[i]);
	for (int i=1; i<=n+1; i++)
		for (int j=0; j<3; j++)
			dp[i][j]=nax;
	for (int i=1; i<=n+1; i++)
		for (int j=0; j<3; j++)
			for (int l=0; l<3; l++)
				if ((l&tab[i])==l && (l&j)==0)
					dp[i][l]=min(dp[i][l], dp[i-1][j]+(!l)),printf("%d %d %d %d\n",i,j,l,dp[i][l]);

	for(int i=0;i<n;i++){
		printf("%d",dp[i][0]);
	}
	// printf("%d\n", dp[n+1][0]-1);
	return 0;
}