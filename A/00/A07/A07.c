#include <stdio.h>
#define N 100009

int main(void){
	int d, n, l[N], r[N], data[N], ans[N];

	scanf("%d%d", &d, &n);
	for(int i = 1; i <= n; i++)
		scanf("%d%d", &l[i], &r[i]);

	for(int i = 1; i <= n; i++){
		data[l[i]] += 1;
		data[r[i] + 1] -= 1;
	}

	ans[0] = 0;
	for(int i = 1; i <= d; i++)
		ans[i] = ans[i - 1] + data[i];

	for(int i = 1; i <= d; i++)
		printf("%d\n", ans[i]);
	return (0);
}
