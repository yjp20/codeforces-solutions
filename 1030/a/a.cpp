// youngjinp20
// 2019 08

#include <bits/stdc++.h>
using namespace std;

int N;
int T;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		T |= t;
	}
	cout << (T ? "HARD" : "EASY");
	return 0;
}
