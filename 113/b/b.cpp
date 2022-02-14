// youngjinp20
// 2021 08

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<set>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 2e3;
char S[MAX+1], BEGIN[MAX+1], END[MAX+1];
ll pre1[MAX+1];
ll pre2[MAX+1];
ll dp1[MAX+1];
ll dp2[MAX+1];

int A = 31;
int B = 1e9 + 7;
int C = 33;
int D = 1e9 + 3;

pair<ll,ll> hashstr(char s[]) {
	int it=0;
	pair<ll, ll> res = {};
	while (s[it]) {
		res.first = (res.first*A + s[it]) % B;
		res.second = (res.second*C + s[it]) % D;
		it ++;
	}
	return res;
}

pair<ll,ll> substr(int l, int r) {
	l ++;
	r ++;
	return {
		((dp1[r] - dp1[l-1] * pre1[r-l+1]) % B + B) % B,
		((dp2[r] - dp2[l-1] * pre2[r-l+1]) % D + D) % D
	};
}

int main() {
	cin >> S >> BEGIN >> END;
	auto st = hashstr(BEGIN);
	auto ed = hashstr(END);

	int len = strlen(S);
	int stlen = strlen(BEGIN);
	int edlen = strlen(END);

	pre1[0] = 1;
	pre2[0] = 1;
	for (int i=1; i<=len; i++) {
		pre1[i] = (pre1[i-1] * A) % B;
		pre2[i] = (pre2[i-1] * C) % D;
		dp1[i] = (dp1[i-1] * A + S[i-1]) % B;
		dp2[i] = (dp2[i-1] * C + S[i-1]) % D;
	}

	vector<int> startMatches;
	vector<int> endMatches;
	for (int i=0; i<len-stlen+1; i++) {
		if (st == substr(i, i+stlen-1)) startMatches.push_back(i);
	}

	for (int i=edlen-1; i<len; i++) {
		if (ed == substr(i-edlen+1, i)) endMatches.push_back(i);
	}

	vector<pair<ll,ll>> hashes;
	for (auto st : startMatches) {
		for (auto ed : endMatches) {
			if (ed - st + 1 < max(stlen, edlen)) continue;
			hashes.push_back(substr(st, ed));
		}
	}

	sort(hashes.begin(), hashes.end());
	cout << unique(hashes.begin(), hashes.end()) - hashes.begin() << endl;

	return 0;
}
