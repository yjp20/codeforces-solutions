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
	int N;
	cin >> N;

	for (int i=0; i<N; i++) {
		for (int j=0; j<N/2; j++) {
			cout << 2*N*j+i+1 << " ";
			cout << 2*N*(j+1)-i << " ";
		}
		cout << endl;
	}

	return 0;
}
