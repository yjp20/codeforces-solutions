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

const int MAX = 2e5+1;
const int MAXT = 501;
int N, M;
int col[MAXT];
int row[MAXT];
bool isPrime[MAX+1];
vector<int> primes;

int main() {
	cin >> N >> M;

	for (int i=2; i<=MAX; i++) isPrime[i] = true;
	for (int i=2; i<=MAX; i++) {
		if (isPrime[i]) {
			primes.push_back(i);
			for (int k=i; k<=MAX; k+=i) {
				isPrime[k] = false;
			}
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			int t;
			cin >> t;
			int val = *lower_bound(primes.begin(), primes.end(), t) - t;
			row[i] += val;
			col[j] += val;
		}
	}

	int best = 1e9;

	for (int i=0; i<N; i++) {
		best = min(best, row[i]);
	}
	for (int j=0; j<M; j++) {
		best = min(best, col[j]);
	}

	cout << best;

	return 0;
}
