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

const int MAX = 5e5;
int N;
int S[MAX];
bool used[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> S[i];
	}

	sort(S, S+N);

	int j=N/2;
	int ct=0;
	for (int i=0; i<N; i++) {
		while (j<N && S[j] < S[i]*2) j++;
		if (j<N && !used[i]) {
			used[j] = true;
			j++;
			ct++;
		}
	}

	cout << N-ct << endl;
	return 0;
}
