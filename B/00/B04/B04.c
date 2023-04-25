#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 9

int main(void){
	int i = 0, sum = 0;
	char n[N];
	scanf("%s", n);

	int len = strlen(n) - 1;
	while(n[i] != '\0'){
		int num = n[i] - '0';
		sum += num * (pow(2, len));
		i++;
		len--;
	}
	printf("%d\n", sum);
	return (0);
}
