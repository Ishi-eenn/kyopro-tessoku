#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, w, q;

	cin >> h >> w;
	vector<vector <int> > x(h + 1, vector<int>(w + 1)), data(h + 1, vector<int>(w + 1, 0));
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++)
			cin >> x[i][j];
	}
	cin >> q;
	vector<int> a(q + 1), b(q + 1), c(q + 1), d(q + 1);
	for(int i = 1; i <= q; i++)
		cin >> a[i] >> b[i] >> c[i] >> d[i];

	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)
			data[i][j] = data[i][j - 1] + x[i][j];

	for(int j = 1; j <= w; j++)
		for(int i = 1; i <= h; i++)
			data[i][j] = data[i - 1][j] + data[i][j];

	for(int i = 1; i <= q; i++){
		cout << data[a[i] - 1][b[i] - 1] + data[c[i]][d[i]]
				- data[a[i] - 1][d[i]] - data[c[i]][b[i] - 1] << endl;
	}
}
