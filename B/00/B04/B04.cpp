#include <bits/stdc++.h>
using namespace std;

int main(void){
	int sum = 0;;
	string n;
	cin >> n;

	for(int i = 0; i < n.size(); i++){
		int pow = (1 << (n.size() - i - 1));
		/*ビットシフト　
		1 << x は2のx乗を表す。
		ビットシフト演算子<<は、左オペランドの値を右オペランドのビット数だけ左にシフトする演算子。
		例えば、1 << 3とすると、1を2進数で表すと0001だが、これを3ビット左にシフトすると、1000となる。
		この結果は、10進数で表すと8となる。
		*/
		sum += (n[i] - '0') * pow;
	}
	cout << sum << endl;
	return (0);
}
