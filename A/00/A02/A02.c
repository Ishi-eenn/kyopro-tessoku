#include <stdio.h>
#define N 100

int main(void){
	int n, x;
	int num[N];

	scanf("%d%d", &n, &x);
	for(int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for(int i = 0; i < n; i++){
		if(num[i] == x){
			printf("Yes");
			return (0);
		}
	}

	printf("No");
	return (0);
}
