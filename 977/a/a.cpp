// youngjinp20
// 2019 08

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int N, K;

int main() {
	cin >> N >> K;
	for (int i=0; i<K; i++) {
		if (N % 10) N --;
		else N /= 10;
	}
	cout << N;
	return 0;
}
