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
	int N, M;
	char c[105][105];
	cin >> N >> M;

	for (int i=0; i<N; i++) {
		cin >> c[i];
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (c[i][j] == '.')
				cout << ((i+j)&1 ? 'B' : 'W');
			else
				cout << '-';
		}
		cout << endl;
	}

	return 0;
}
