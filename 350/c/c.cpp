// youngjinp20
// 2021 08

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

const int MAX = 1e5;
int N;
pair<int, int> pts[MAX];
int ct;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> pts[i].first >> pts[i].second;
		ct += pts[i].first ? 2 : 0;
		ct += pts[i].second ? 2 : 0;
		ct += 2;
	}

	cout << ct << endl;
	sort(pts, pts+N, [](auto a, auto b) {
		return abs(a.first) + abs(a.second) < abs(b.first) + abs(b.second);
	});


	for (int i=0; i<N; i++) {
		if (pts[i].first) printf("1 %d %c\n", abs(pts[i].first), pts[i].first > 0 ? 'R' : 'L');
		if (pts[i].second) printf("1 %d %c\n", abs(pts[i].second), pts[i].second > 0 ? 'U' : 'D');
		printf("2\n");
		if (pts[i].first) printf("1 %d %c\n", abs(pts[i].first), pts[i].first > 0 ? 'L' : 'R');
		if (pts[i].second) printf("1 %d %c\n", abs(pts[i].second), pts[i].second > 0 ? 'D' : 'U');
		printf("3\n");
	}

	return 0;
}
