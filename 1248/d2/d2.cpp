// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

bool othersort(const pi &a, const pi &b) {
	return a.second < b.second;
}

tuple<int, int, int> between(vector<pi> &V) {
	int ma = 0;
	int ml = 0;
	int mr = 0;

	int ct = 0;
	int l = 0;

	bool first = true;
	for (int i=0; i<V.size()*2; i++) {
		int idx = i%V.size();
		if (V[idx].second == 0) {
			if (!first) {
				if (ma < ct) {
					ma = ct;
					ml = l;
					mr = V[idx].first - 1;
				}
			}
			l = V[idx].first;
			first = false;
		}
		else {
			ct ++;
		}
	}
	return make_tuple(ma, ml, mr);
}

int main() {
	int n;
	int cur = 0;
	int mi = 1e9;
	int mict = 0;
	int a[300005];
	scanf("%d\n", &n);
	for (int i=0; i<n; i++) {
		char c;
		scanf("%c", &c);
		if (c == '(') a[i] = cur ++;
		if (c == ')') a[i] = cur --;
		mi = min(cur, mi);
	}
	if (cur != 0) {
		puts("0\n1 1");
		return 0;
	}
	vector<pi> A, B;
	for (int i=0; i<n; i++) {
		if (a[i] == mi) {
			mict ++;
			B.push_back({i, 0});
		}
		if (a[i] == mi+1) {
			B.push_back({i, 1});
			A.push_back({i, 0});
		}
		if (a[i] == mi+2) A.push_back({i, 1});
	}
	int l = 0;
	int ct = 0;
	tuple<int,int,int> ma = between(A);
	tuple<int,int,int> oa = between(B);

	if (mict + get<0>(ma) > oa) {
		if (get<0>(ma) == 0) printf("%d\n1 1\n", mict);
		else               printf("%d\n%d %d\n", mict + get<0>(ma), get<1>(ma), get<2>(ma));
	}
	else {
		else               printf("%d\n%d %d\n", get<0>(oa), get<1>(oa), get<2>(oa));
	}
	return 0;
}
