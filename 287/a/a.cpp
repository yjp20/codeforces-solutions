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

char A[4][4];

int main() {
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			do {
				cin >> A[i][j];
			} while (A[i][j] == '\n');
		}
	}

	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			int sum = 0;
			sum += A[i][j] == '#';
			sum += A[i][j+1] == '#';
			sum += A[i+1][j] == '#';
			sum += A[i+1][j+1] == '#';
			if (sum != 2) {
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO\n";
	return 0;
}
