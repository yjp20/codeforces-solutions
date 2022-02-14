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
	int T;
	cin >> T;

	while (T--) {
		char S[11];
		cin >> S;
		int t1[10]; // try to make team 1 win asap
		int t2[10]; // try to make team 2 win asap
		for (int i=0; i<10; i++) {
			if (S[i] != '?') t1[i] = t2[i] = S[i] - '0';
			else {
				t1[i] = (i%2==0);
				t2[i] = (i%2==1);
			}
		}

		int best = 10;
		int d1=0;
		for (int i=0; i<10; i++) {
			d1 += t1[i] * (i%2 ? -1 : 1);
			int pd1 = (10-i)/2;
			if (d1 > pd1) best = min(best, i+1);
		}

		int d2=0;
		for (int i=0; i<10; i++) {
			d2 += t2[i] * (i%2 ? 1 : -1);
			int pd2 = (9-i)/2;
			if (d2 > pd2) best = min(best, i+1);
		}

		cout << best << endl;
	}

	return 0;
}
