// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

int a[4];
bool flag;

void bt(int i, int x, int y) {
	if (i == 4) {
		if (x == y) {
			flag = true;
		}
		return;
	}
	bt(i+1, x+a[i], y);
	bt(i+1, x, y+a[i]);
}

int main() {
	for (int i=0; i<4; i++) {
		cin >> a[i];
	}
	bt(0, 0, 0);
	printf("%s\n", flag ? "YES" : "NO");
	return 0;
}

