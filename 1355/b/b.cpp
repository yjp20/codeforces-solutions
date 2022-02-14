// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		int N;
		cin >> N;
		int E[N];
		for (int i=0; i<N; i++) {
			cin >> E[i];
		}

		sort(E, E+N);

		int group_ct = 0;
		int cur_ct = 0;

		for (int i=0; i<N; i++) {
			if (E[i] <= ++cur_ct) {
				group_ct ++;
				cur_ct = 0;
			}
		}

		cout << group_ct << endl;
	}

	return 0;
}
