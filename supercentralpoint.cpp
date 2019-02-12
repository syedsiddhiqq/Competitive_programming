/*
* @Author: SyedAli
* @Date:   2019-01-14 14:51:52
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 15:43:01
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,upper=0,lower=0,left=0,right=0,count=0;
	scanf("%d",&n);
	vector<pair<int ,int> > points;
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		points.push_back(make_pair(x,y));
	}

	for(int i=0;i<n;i++){
		upper=0,lower=0,left=0,right=0;
		for(int j=0;j<n;j++){
			if(i!=j){
				if(points[j].first > points[i].first  && points[j].second == points[i].second) right=1;
				if(points[j].first < points[i].first  && points[j].second == points[i].second) left=1;
				if(points[j].first == points[i].first  && points[j].second < points[i].second) lower=1;
				if(points[j].first == points[i].first  && points[j].second > points[i].second) upper=1;
				if(upper ==  1 && lower == 1 && right == 1 && left == 1) {++count;break;}
				// printf("%d %d %d %d\n",points[i].first,points[i].second,points[j].first,points[j].second);
				// printf("%d %d %d %d\n",left,right,upper,lower);
			}
		}
		// printf("\n\n");
	}
	
	printf("%d",count);
	return 0;
}