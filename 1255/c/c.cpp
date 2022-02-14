// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n;
	int arr[100005] = {0};
	int input[100005][3];
	int used[100005] = {0};
	vi loc[100005];
	cin >> n;
	for (int i=0; i<n-2; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a] ++;
		arr[b] ++;
		arr[c] ++;
		input[i][0] = a;
		input[i][1] = b;
		input[i][2] = c;
		loc[a].push_back(i);
		loc[b].push_back(i);
		loc[c].push_back(i);
	}

	vi ans;
	int cur=-1;
	int end=-1;
	int send=-1;
	for (int i=1; i<=n; i++) {
		if (arr[i] == 1) {
			if (cur == -1) {
				cur = i;
			} else{
				end = i;
			}
		}
	}
	ans.push_back(cur);
	for (auto e:loc[end]) {
		for (int j=0; j<3; j++) {
			int val = input[e][j];
			if (arr[val] == 2) {
				send = val;
			}
		}
	}

	for (int i=0; i<n-3; i++) {
		for (auto e:loc[cur]) {
			if (!used[e]) {
				for (int j=0; j<3; j++) {
					int val = input[e][j];
					if (--arr[val] == 1 && val != send && val != end) {
						cur = val;
					}
				}
				used[e] = true;
			}
		}
		ans.push_back(cur);
	}

	ans.push_back(send);
	ans.push_back(end);

	for (auto e : ans) {
		printf("%d ", e);
	}


	return 0;
}
