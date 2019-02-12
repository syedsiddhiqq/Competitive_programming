#include <stdio.h>

int cnt[128];
char str[100001];

int main(void) {
	int i;
	int n;

	scanf("%d %s", &n, str);
	if (n > 26)
		puts("-1");
	else {
		int ans;

		for (i = 0; i < n; i++)
			cnt[str[i]]++;

		ans = 0;
		for (i = 'a'; i <= 'z'; i++)
			ans += cnt[i] > 0 ? cnt[i] - 1 : 0;

		printf("%d\n", ans);
	}

	return 0;
}
