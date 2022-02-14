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

int main() {
	int N;
	cin >> N;

	while (N) {
		if (N%1000 == 144) {
			N /= 1000;
		}
		else if (N%100 == 14) {
			N /= 100;
		}
		else if (N%10 == 1) {
			N /= 10;
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}
