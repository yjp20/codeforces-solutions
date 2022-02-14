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

const int MAX = 1e5+5;
ll A, B, N;
char ans[MAX];

int main() {
	cin >> A >> B >> N;

	int t = A;

	for (int i=0; i<N; i++) {
		bool flag = false;
		t *= 10;

		for (int j=0; j<10; j++) {
			if ((t+j) % B == 0) {
				flag = true;
				ans[i] = j + '0';
				t += j;
				t %= B;
				break;
			}
		}

		if (!flag) {
			cout << -1 << endl;
			return 0;
		}
	}

	cout << A;
	cout << ans;
	return 0;
}
