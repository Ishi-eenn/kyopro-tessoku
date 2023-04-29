#include <bits/stdc++.h>
#define N 100009
using namespace std;

int main(void){
	int d, n;
	int l[N], r[N], data[N], ans[N];

	cin >> d >> n;
	for(int i = 1; i <= n; i++)
		cin >>l[i] >> r[i];

	for(int i = 1; i <= n; i++){
		data[l[i]] += 1;
		data[r[i] + 1] -= 1;
	}

	ans[0] = 0;
	for(int i = 1; i <= d; i++)
		ans[i] = ans[i - 1] + data[i];

	for(int i = 1; i <= d; i++)
		cout << ans[i] << endl;
	return (0);
}
