// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

const int MOD = 1<<30;
int N[101][101];

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int i=1; i<=100; i++) {
		int t = i;

		for (int j=2; j*j<=t; j++) {
			while (t%j == 0) {
				N[i][j] ++;
				t /= j;
			}
		}

		if (t > 1) {
			N[i][t]++;
		}
	}

	ll sum=0;

	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			for (int k=1; k<=c; k++) {
				ll mult = 1;
				for (int p=2; p<=100; p++) {
					mult *= N[i][p] + N[j][p] + N[k][p] + 1;
					mult %= MOD;
				}
				sum += mult;
				sum %= MOD;
			}
		}
	}

	cout << sum;

	return 0;
}
