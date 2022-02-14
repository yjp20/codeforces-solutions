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
vector<pair<int,int>> X;

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		X.push_back({a,b});
	}

	sort(X.begin(), X.end());

	int cur = X[0].second;
	for (int i=0; i<N; i++) {
		if (X[i].second >= cur) {
			cur = X[i].second;
		}
		else {
			cur = X[i].first;
		}
	}

	cout << cur;

	return 0;
}
