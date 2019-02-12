/*
* @Author: SyedAli
* @Date:   2019-01-07 19:29:16
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-08 12:28:16
*/

#include <cstdio>
#include <queue>
#include <utility>
using namespace std;

const int MAX_N = 1e4;

int n, m;
bool mark[MAX_N + 5];

void bfs() {
    queue< pair<int, int> > q; /// <num, depth>
    q.push(make_pair(n, 0));
    mark[n] = true;
    // printf("%d",q.front());
    while (!q.empty()) {
        pair<int, int> f = q.front();
        int num = f.first, depth = f.second;
        q.pop();

        if (num == m) {
            printf("%d\n", depth);
            return;
        }

        if (num > 1 && !mark[num-1]) {
            q.push(make_pair(num-1, depth+1));
            mark[num-1] = true;
        }

        if ((num<<1) <= MAX_N && !mark[num<<1]) {
            q.push(make_pair(num<<1, depth+1));
            mark[num<<1] = true;
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    bfs();
    return 0;
}
