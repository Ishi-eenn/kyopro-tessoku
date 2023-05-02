#include <bits/stdc++.h>
#define N 100
using namespace std;

int main(void){
	int n, x, A[N];

	cin >> n >> x;
	for(int i = 0; i < n; i++)
		cin >> A[i];

	for(int i = 0; i < n; i++){
		if(A[i] == x){
			cout << "Yes" << endl;
			return (0);
		}
	}

	cout << "No" << endl;
	return (0);
}
