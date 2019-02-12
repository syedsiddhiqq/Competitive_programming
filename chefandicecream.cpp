#include <iostream>
using namespace std;

int main() {
	int t;
	long long int temp;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%I64d",&temp);
	    printf("%I64d\n",(temp*(temp+1))/2)%1000000007);
	}
	return 0;
}
