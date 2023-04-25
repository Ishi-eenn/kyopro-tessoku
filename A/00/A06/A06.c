#include <stdio.h>
#define N 100009

int main(void){
	int n, q, a[N], sum[N], l[N], r[N];

	scanf("%d%d", &n, &q);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 0; i < q; i++)
		scanf("%d%d", &l[i], &r[i]);

	sum[0] = a[0];
	for(int i = 1; i < n; i++)
		sum[i] = sum[i - 1] + a[i];
	for(int i = 0; i < q; i++)
		printf("%d\n", sum[r[i] - 1] - sum[l[i] - 2]);
	return (0);
}
