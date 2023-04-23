#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d%d", &a, &b);

	for(int i = a; i <= b; i++){
		if(100 % i == 0){
			puts("Yes");
			return (0);
		}
	}
	puts("No");
	return (0);
}
