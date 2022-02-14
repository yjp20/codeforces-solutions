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
	int N, ct=0;
	cin >> N;

	for (int i=1; i<N; i++) {
		for (int j=i+1; j<N; j++) {
			int val = i*i + j*j;
			int sq = sqrt(val);
			if (sq > N) break;
			if (sq*sq == val) {
				ct ++;
			}
		}
	}

	cout << ct << endl;

	return 0;
}
