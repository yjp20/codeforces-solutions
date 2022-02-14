// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;
int N;
int A[3005];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	for (int i=0; i<N-1; i++) {
		for (int j=i+1; j<N-1; j++) {
			int a = A[i];
			int b = A[j];
			int c = A[i+1];
			int d = A[j+1];
			if (a > c) swap(a,c);
			if (b > d) swap(d,b);
			bool cond1 = a < b && b < c && c < d;
			bool cond2 = b < a && a < d && d < c;
			if (cond1 || cond2) {
				cout << "yes";
				return 0;
			}
		}
	}

	cout << "no";
	return 0;
}
