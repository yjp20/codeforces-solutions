// youngjinp20
// 2021 11

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 3e5;
int N;
int A[MAX];
int L[MAX], R[MAX];

int T[2*MAX];

int q(int l, int r) {
	l += N;
	r += N;
	int common = T[l];
	while (l < r) {
		if (l&1) common = gcd(common, T[l++]);
		if (r&1) common = gcd(common, T[--r]);
		l /= 2;
		r /= 2;
	}
	return common;
}

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	for (int i=0; i<N; i++) {
		T[i+N] = A[i];
	}

	for (int i=N-1; i>=1; i--) {
		T[i] = gcd(T[i*2], T[i*2+1]);
	}

	for (int i=0; i<N; i++) {
		int l = 0;
		int r = i;
		while (l < r) {
			int mid = (r+l) / 2;
			if (q(mid, i+1) % A[i] == 0) {
				r = mid;
			} else {
				l = mid + 1;
			}
		}
		L[i] = l;
	}

	for (int i=N-1; i>=0; i--) {
		int l = i;
		int r = N-1;
		while (l < r) {
			int mid = (r+l+1) / 2;
			if (q(i, mid+1) % A[i] == 0) {
				l = mid;
			} else {
				r = mid - 1;
			}
		}
		R[i] = l;
	}

	int best = 0;
	for (int i=0; i<N; i++) {
		best = max(R[i] - L[i], best);
	}

	vector<int> ans;
	for (int i=0; i<N; i++) {
		if (R[i] - L[i] == best) {
			ans.push_back(L[i]);
		}
	}

	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());

	cout << ans.size() << " " << best << endl;
	for (auto e : ans) {
		cout << e+1 << " ";
	}

	return 0;
}
