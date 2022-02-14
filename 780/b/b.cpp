// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n;
	int x[60000];
	int v[60000];
	cin >> n;
	for (int i=0; i<n; i++) cin >> x[i];
	for (int i=0; i<n; i++) cin >> v[i];

	double cur = 1e9/2;
	double change = 1e9/2;
	double best = 0;
	for (int i=0; i<n; i++) {
		best += abs((x[i] - cur) / v[i]);
	}

	while (change > 1e-10) {
		double loc, time;

		loc = cur + change;
		time = 0;
		for (int i=0; i<n; i++) {
			time = max(abs((x[i] - loc) / v[i]), time);
		}
		if (time < best) {
			best = time;
			cur = loc;
		}

		loc = cur - change;
		time = 0;
		for (int i=0; i<n; i++) {
			time = max(abs((x[i] - loc) / v[i]), time);
		}
		if (time < best) {
			best = time;
			cur = loc;
		}

		change /= 2;
	}

	printf("%lf", best);

	return 0;
}
