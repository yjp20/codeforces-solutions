// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		vector<int> H(N);
		for (int i=0; i<N; i++) {
			cin >> H[i];
		}
		sort(H.begin(), H.end());
		if (N==2) {
			cout << H[0] << " " << H[1] << endl;
			continue;
		}
		int m = 1e9;
		int m_idx = -1;
		for (int i=0; i<N-1; i++) {
			if (m > H[i+1]-H[i]) {
				m = H[i+1] - H[i];
				m_idx = i;
			}
		}
		for (int i=0; i<N; i++) {
			cout << H[(i+m_idx+1)%N] << " ";
		}
		cout << endl;
	}

	return 0;
}
