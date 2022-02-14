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
int N;
char A[MAX][MAX];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			do cin >> A[i][j]; while (A[i][j] == '\n');
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (A[i][j] == '#') {
				if (j == 0 || j == N-1 || i >= N-2) {
					cout << "NO" << endl;
					return 0;
				}

				bool err = false;
				err |= (A[i][j]++) != '#';
				err |= (A[i+1][j]++) != '#';
				err |= (A[i+1][j-1]++) != '#';
				err |= (A[i+1][j+1]++) != '#';
				err |= (A[i+2][j]++) != '#';

				if (err) {
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}

	cout << "YES" << endl;

	return 0;
}
