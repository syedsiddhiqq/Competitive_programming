#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<string,int> names;
    while(cin>>s){
        if(names[s]){
            printf("%s%d\n",s.c_str(),names[s]);
        }else{
            printf("OK\n");
        }
        names[s]++;
    }

    return 0;
}
