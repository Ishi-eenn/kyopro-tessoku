#include <stdio.h>

int main(void){
	int n, num[10];
	scanf("%d", &n);

	for(int i = 0; i < 10; i++){
		num[i] = n % 2;
		n /= 2;
	}

	for(int i = 9; i >= 0; i--)
		printf("%d", num[i]);
	putchar('\n');
	return (0);
}
