#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, num[10];
	cin >> n;

	for(int i = 9; i >= 0; i--){
		num[i] = n % 2;
		n /= 2;
	}

	for(int i = 0; i < 10; i++)
		printf("%d", num[i]);
	putchar('\n');
	return (0);
}
