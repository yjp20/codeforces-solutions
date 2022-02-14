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

const int MAX = 100;
int N, M, D;
int A[MAX][MAX];

int main() {
	cin >> N >> M >> D;

	vector<int> arr;
	int modulo;

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> A[i][j];
			if (!i && !j) modulo = A[i][j] % D;
			if ((A[i][j] % D) != modulo) {
				cout << -1 << endl;
				return 0;
			}
			arr.push_back(A[i][j]);
		}
	}

	sort(arr.begin(), arr.end());

	int cost = 0;
	int mid = arr[arr.size()/2];

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cost += abs(A[i][j] - mid) / D;
		}
	}

	cout << cost << endl;

	return 0;
}
