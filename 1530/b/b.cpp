// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int H, W;
		cin >> H >> W;
		for (int i=0; i<W; i++) {
			cout << (i&1 ? '0' : '1');
		}
		cout << endl;
		for (int i=0; i<H-2; i++) {
			for (int j=0; j<W; j++) {
				cout << (i&1 && i<H-3  && (j==0 || j==W-1) ? '1' : '0');
			}
			cout << endl;
		}

		for (int i=0; i<W; i++) {
			cout << (i&1 ? '0' : '1');
		}
		cout << endl;
		cout << endl;
	}

	return 0;
}
