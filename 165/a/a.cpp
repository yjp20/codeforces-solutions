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

const int MAX = 1000;

int l[2*MAX+1];
int r[2*MAX+1];
int t[2*MAX+1];
int b[2*MAX+1];

int main() {
	int N;
	cin >> N;
	pair<int, int> points[N];

	for (int i=0; i<=2*MAX; i++) {
		l[i] = t[i] = 2*MAX;
	}

	for (int i=0; i<N; i++) {
		int X, Y;
		cin >> X >> Y;
		X += MAX;
		Y += MAX;

		points[i] = {X, Y};

		smin(l[Y], X);
		smax(r[Y], X);
		smin(t[X], Y);
		smax(b[X], Y);
	}

	int ct = 0;
	for (int i=0; i<N; i++) {
		auto &p = points[i];
		int f = p.first;
		int s = p.second;
		if (l[s]<f && f<r[s] && t[f]<s && s<b[f])
			ct ++;
	}

	cout << ct;

	return 0;
}
