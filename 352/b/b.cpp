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

const int MAX = 1e5+1;
int N;
int diff[MAX];
int last[MAX];
int ign[MAX];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++) {
		int t;
		cin >> t;
		if (last[t])
			if (!diff[t])
				diff[t] = i-last[t];
			if (diff[t] && diff[t] != i-last[t])
				ign[t] = true;
		else
			last[t] = i;
	}

	int ct=0;

	for (int i=1; i<MAX; i++)
		if (last[i] && !ign[i])
			ct ++;

	cout << ct << endl;

	for (int i=1; i<MAX; i++)
		if (last[i] && !ign[i])
			cout << i << " " << diff[i] << endl;

	return 0;
}
