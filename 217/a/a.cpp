// youngjinp20
// 2021 06

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<set>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX_N = 100;
const int MAX_LINE = 1000;
int N;
int group[MAX_N+1];
int lineX[MAX_LINE+1];
int lineY[MAX_LINE+1];

int find(int x) {
	if (group[x] != x) return group[x] = find(group[x]);
	return x;
}

void uni(int a, int b) {
	a = find(a);
	b = find(b);
	if (b<a) swap(b,a);
	group[b] = a;
}

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) group[i] = i;
	for (int i=1; i<=N; i++) {
		int X, Y;
		cin >> X >> Y;
		if (lineX[X]) uni(lineX[X], i);
		else lineX[X] = i;
		if (lineY[Y]) uni(lineY[Y], i);
		else lineY[Y] = i;
	}

	set<int> s;
	for (int i=1; i<=N; i++) {
		s.insert(find(i));
	}

	cout << s.size()-1 << endl;

	return 0;
}
