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

int N;
int A[7];

int main() {
	cin >> N;
	for (int i=0; i<7; i++)
		cin >> A[i];

	int day;
	while (N>0) {
		for (day=0; day<7 && N>0; day++) {
			N -= A[day];
		}
	}

	cout << day;

	return 0;
}
