#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, w, n;

	cin >> h >> w >> n;
	vector<int> a(n + 1), b(n + 1), c(n + 1), d(n + 1);
	for(int i = 1; i <= n; i++)
		cin >> a[i] >> b[i] >> c[i] >> d[i];

	vector<vector <long> > data(h + 2, vector<long>(w + 2, 0)), ans(h + 2, vector<long>(w + 2, 0));
	for(int i = 1; i <= n; i++){
		data[a[i]][b[i]] += 1;
		data[c[i] + 1][d[i] + 1] += 1;
		data[a[i]][d[i] + 1] -= 1;
		data[c[i] + 1][b[i]] -= 1;
	}

	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++)
			ans[i][j] = ans[i][j - 1] + data[i][j];
	}
	for(int j = 1; j <= w; j++){
		for(int i = 1; i <= h; i++)
			ans[i][j] = ans[i - 1][j] + ans[i][j];
	}

	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			cout << ans[i][j];
			if(j != w)
				cout << " ";
		}
		cout << endl;
	}
	return (0);
}
