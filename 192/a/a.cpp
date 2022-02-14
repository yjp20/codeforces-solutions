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
#include<set>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int N;
set<ll> s;

int main() {
	cin >> N;

	for (int i=1; i*(i+1)/2 < N; i++) {
		s.insert(i*(i+1)/2);
	}

	for (auto e : s) {
		if (s.find(N-e) != s.end()) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
