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

int N, M;
int ct=0;
char S[105][105];

int main() {
	char mask[100] = {0};

	cin >> N >> M;
	for (int i=0; i<N; i++) {
		cin >> S[i];
		mask[i] = 'A';
	}

	for (int i=0; i<M; i++) {
		bool bad = false;

		for (int j=0; j<N-1; j++) {
			if (mask[j] && mask[j] == mask[j+1]) {
				if (S[j][i] > S[j+1][i]) {
					bad = true;
					break;
				}
			}
		}

		if (bad) {
			ct ++;
			continue;
		}

		char newmask[100] = {0};

		for (int j=0; j<N; j++) {
			bool cond1 = (j < N - 1 && mask[j] && mask[j] == mask[j+1]) ? (S[j][i] == S[j+1][i]) : false;
			bool cond2 = (j > 0     && mask[j] && mask[j] == mask[j-1]) ? (S[j][i] == S[j-1][i]) : false;

			if (cond1 || cond2) {
				newmask[j] = S[j][i];
			}
		}

		for (int j=0; j<N; j++) {
			mask[j] = newmask[j];
		}
	}

	cout << ct;

	return 0;
}
