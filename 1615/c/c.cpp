// youngjinp20
// 2021 12

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

// 0001
// 1110
// 
// 11101
// 01111
// 10010
//
// 10010
// 11011
// 01001

// 1111
//
const int MAX = 1e5 + 5;
int T, N;
char a[MAX+1], b[MAX+1];

int main() {
	cin >> T;

	for (int t=0; t<T; t++) {
		cin >> N >> a >> b;

		int k[2][2] = {0};

		// aa=ba+1
		// ab=bb
		// ba=aa-1
		// bb=ab

		// aa=ba
		// ab=bb+1
		// ba=aa
		// bb=ab-1
		// 9

		for (int i=0; i<N; i++) {
			k[a[i]-'0'][b[i]-'0'] ++;
		}

		int m = MAX;
		if (k[0][1] == k[1][0]) m = min(m, 2*k[0][1]);
		if (k[1][1] && k[1][1]-1 == k[0][0]) m = min(m, 2*k[0][0]+1);
		if (k[1][0] && k[1][1]-1 == k[0][0]) m = min(m, 2*k[1][1]+1);
		if (m == MAX) m = -1;
		cout << m << endl;
	}

	return 0;
}
