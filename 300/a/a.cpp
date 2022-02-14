// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int N, A[101];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	vector<int> x,a,b,c;
	bool flag = true;

	for (int i=0; i<N; i++) {
		if (A[i] < 0)  x.push_back(A[i]);
		if (A[i] > 0)  b.push_back(A[i]);
		if (A[i] == 0) c.push_back(A[i]);
	}

	a.push_back(x[0]);
	for (int i=1; i<x.size(); i++) {
		if (i+1 < x.size()) {
			b.push_back(x[i]);
			b.push_back(x[++i]);
		}
		else {
			c.push_back(x[i]);
		}
	}

	cout << a.size() << " ";
	for (auto e : a) cout << e << " ";
	cout << endl << b.size() << " ";
	for (auto e : b) cout << e << " ";
	cout << endl << c.size() << " ";
	for (auto e : c) cout << e << " ";

	return 0;
}
