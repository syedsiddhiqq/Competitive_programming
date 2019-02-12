/*
* @Author: SyedAli
* @Date:   2019-01-23 22:47:28
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 01:34:03
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int n,sum,temp,power=1;
	scanf("%d %d",&n,&sum);
	vector<int > _min;
	if(n>1 && sum == 0){
		printf("-1 -1");
		return 0;
	}
	if(sum > n*9 ){
		printf("-1 -1");
		return 0;
	}

	temp = n;
	temp--;
	while(temp--){
		power = power*10;
	}
	if(sum>0 && sum<9 && n==2){
		printf("1%d %d",sum-1,power*sum);
		return 0;
	}
	temp = sum;
	for(int i=n;i>1;i--){
		_min.push_back(min(temp - 1, 9));
        temp -= min(temp - 1, 9);
	}
	_min.push_back(temp);
	for(int i = _min.size() - 1; i >= 0; i--) printf("%d",_min[i]);
	_min.clear();
	temp = sum;
	for(int i=0;i<n;i++){
		_min.push_back(min(temp,9));
		temp -= min(temp,9);
	}
	printf(" ");	
	for(int i=0;i<_min.size();i++) printf("%d",_min[i]);
	return 0;
}