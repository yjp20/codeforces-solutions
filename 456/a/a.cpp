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

int main() {
	int n;
	cin >> n;

	vector<pair<int,int>> V;

	for (int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		V.push_back({a,b});
	}

	sort(V.begin(), V.end());

	for (int i=1; i<n; i++) {
		if (V[i-1].second > V[i].second) {
			cout << "Happy Alex";
			return 0;
		}
	}

	cout << "Poor Alex";
	return 0;
}
