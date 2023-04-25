#include <stdio.h>

int main(void){
	int n, k, count = 0;;
	scanf("%d%d", &n, &k);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(0 < (k - i - j) && (k - i - j) <= n)
				count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
