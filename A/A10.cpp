#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, d;

	cin >> n;
	vector<int> a(n + 1), p(n + 1), q(n + 1);
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> d;
	vector<int> l(d + 1), r(d + 1);
	for(int i = 1; i <= d; i++)
		cin >> l[i] >> r[i];

	p[1] = a[1];
	for(int i = 2; i <= n; i++)
		p[i] = max(p[i - 1], a[i]);

	q[n] = a[n];
	for(int i = n - 1; i >= 1; i--)
		q[i] = max(q[i + 1], a[i]);

	for(int i = 1; i <= d; i++)
		cout << max(p[l[i] - 1], q[r[i] + 1]) << endl;
	return (0);
}
