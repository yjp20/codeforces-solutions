// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 3e5;
const int MAX_A = 5e3+1;
int N;
vector<int> a[MAX_A];

int main() {
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin >> N;


	for (int i=0; i<2*N; i++) {
		int t;
		cin >> t;
		a[t].push_back(i);
	}

	for (int i=0; i<MAX_A; i++) {
		if (a[i].size() % 2 == 1) {
			cout << -1;
			return 0;
		}
	}

	for (int i=0; i<MAX_A; i++) {
		int flag = 0;
		for (auto &e : a[i]) {
			cout << e+1;
			if (flag) {
				cout << endl;
				flag = 0;
			}
			else {
				cout << " ";
				flag = 1;
			}
		}
	}

	return 0;
}
