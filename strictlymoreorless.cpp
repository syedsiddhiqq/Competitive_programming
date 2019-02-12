/*
* @Author: God_of_Speed
* @Date:   2018-12-30 18:52:17
* @Last Modified by:   God_of_Speed
* @Last Modified time: 2018-12-30 19:45:07
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,_min,_max,temp,performance=0;
    scanf("%d",&n);
    scanf("%d",&temp);
    _min = temp;
    _max = temp;
    n--;
    while(n--){
        scanf("%d",&temp);
        if(temp>_max){
            performance++;
            _max = temp;
            continue;
        }
        if(temp<_min){
            performance++;
            _min  = temp;
        }
    }
    printf("%d",performance);
}
