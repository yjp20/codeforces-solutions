// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int i=1; i<=10000; i++) {
		for (int j=1; i*j<=10000; j++) {
			for (int k=1; i*k<=10000 && j*k<=10000; k++) {
				if (i*j == a && j*k == b && i*k == c) {
					cout << (i+j+k)*4;
					return 0;
				}
			}
		}
	}

	return 0;
}
