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
	int N, sum=0;
	cin >> N;

	for (int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		sum += a;
	}

	int i=0;
	for (; i<sum/1000; i++) {
		cout << "G";
	}

	if (sum%1000 >= 500) {
		cout << "G";
		i ++;
	}

	for (; i<N; i++) {
		cout << "A";
	}

	return 0;
}
