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

int main() {
	int X, Y, A, B;
	cin >> X >> Y >> A >> B;

	vector<pair<int, int> > sols;

	for (int i=A; i<=X; i++) {
		for (int j=B; j<i && j<=Y; j++) {
			sols.push_back({i, j});
		}
	}

	cout << sols.size() << endl;
	for (auto e : sols) {
		cout << e.first << " " << e.second << endl;
	}

	return 0;
}
