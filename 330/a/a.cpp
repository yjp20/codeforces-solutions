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

const int MAX = 10;
int R, C;
int rt, ct;
int rows[MAX];
int cols[MAX];
char c;

int main() {
	cin >> R >> C;

	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			cin >> c;
			if (c == 'S') {
				rows[i] = 1;
				cols[j] = 1;
			}
		}
	}

	for (int i=0; i<R; i++)
		if (!rows[i]) rt ++;

	for (int i=0; i<C; i++)
		if (!cols[i]) ct ++;

	cout << rt * C + ct * R - rt * ct;

	return 0;
}
