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

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 100;
int N;
int X[MAX];
int j;
bool used[MAX];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> X[i];
	}
	sort(X, X+N);
	for (j=1; j<=N; j++) {
		bool possible = true;
		for (int i=0; i<N; i++) {
			if (i/j > X[i]) {
				possible = false;
				break;
			}
		}
		if (possible) {
			break;
		}
	}

	cout << j << endl;

	return 0;
}
