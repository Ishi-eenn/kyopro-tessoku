#include <bits/stdc++.h>
#define N 101
using namespace std;

int main(void){
	int n, a[N];
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	for(int i = 0; i < n - 2; i++)
		for(int j = i + 1; j < n - 1; j++)
			for(int k = j + 1; k < n; k++)
				if(a[i] + a[j] + a[k] == 1000){
					cout << "Yes" << endl;
					return (0);
				}

	cout << "No" << endl;
	return (0);
}
