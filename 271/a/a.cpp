// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n;
	cin >> n;
	for (int i=n+1; i<=20000; i++) {
		int used[10] = {0};
		int tmp = i;
		bool fucked = false;
		while (tmp) {
			if (used[tmp%10]) {
				fucked = true;
				break;
			}
			used[tmp%10] = 1;
			tmp /= 10;
		}
		if (!fucked) {
			cout << i;
			return 0;
		}
	}

	return 0;
}
