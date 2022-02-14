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
vector<ll> arr;

ll add(int depth, int used, int max, ll num) {
	if (depth == max*2) {
		arr.push_back(num);
		return 0;
	}
	if (used < max)
		add(depth+1, used+1, max, num * 10 + 4);
	if (depth - used < max)
		add(depth+1, used, max, num * 10 + 7);
	return 0;
}

int main() {
	for (int i=1; i<=5; i++) {
		add(0, 0, i, 0);
	}

	sort(arr.begin(), arr.end());
	cin >> N;
	cout << *lower_bound(arr.begin(), arr.end(), N);

	return 0;
}
