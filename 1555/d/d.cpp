// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>
#include<string>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

string perms[6] = {
	"abc",
	"bca",
	"cab",
	"acb",
	"cba",
	"bac"
};

const int MAX = 2e5;
int N, M;
char S[MAX+1];
int sums[6][MAX+1];

int main() {
	cin >> N >> M;
	cin >> S;


	for (int j=0; j<6; j++) {
		for (int i=1; i<=N; i++) {
			sums[j][i] = (S[i-1] == perms[j][i%3]) + sums[j][i-1];
		}
	}

	for (int i=0; i<M; i++) {
		int L, R;
		cin >> L >> R;

		int best = 1e9;
		for (int j=0; j<6; j++) {
			best = min(best, R-L+1-(sums[j][R]-sums[j][L-1]));
		}

		cout << best << endl;
	}

	return 0;
}
