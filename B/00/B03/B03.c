#include <stdio.h>
#define N 101

int main(void){
	int n, a[N];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(int i = 0; i < n - 2; i++)
		for(int j = i + 1; j < n - 1; j++)
			for(int k = j + 1; k < n; k++)
				if(a[i] + a[j] + a[k] == 1000){
					puts("Yes");
					return (0);
				}

	puts("No");
	return (0);
}
