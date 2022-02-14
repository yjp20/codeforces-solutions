// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int v;
int a[9];

int main() {
	cin >> v;
	int m = 1e9;
	int m_idx = -1;
	for (int i=0; i<9; i++) {
		cin >> a[i];
		if (a[i] <= m) {
			m = a[i];
			m_idx = i;
		}
	}

	int digits = v / m;
	int excess = v - digits*m;
	vector<int> num;

	for (int i=0; i<digits; i++) {
		bool flag = true;
		for (int j=8; j>=0; j--) {
			if (excess >= a[j] - m) {
				num.push_back(j+1);
				excess -= a[j] - m;
				flag = false;
				break;
			}
		}
		if (flag) {
			num.push_back(m_idx+1);
		}
	}

	if (digits == 0) {
		puts("-1");
	}
	for (int i=0; i<digits; i++) {
		printf("%d", num[i]);
	}

	return 0;
}
