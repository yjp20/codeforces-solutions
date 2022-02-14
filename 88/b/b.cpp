// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, m, x;
int ct=0;
bool hasshift;
bool shift[26];
bool alpha[26];
char s[500005];

int main() {
	cin >> n >> m >> x;
	char arr[n][m] = {0};

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("\n%c", &(arr[i][j]));
		}
	}

	for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
		if (arr[i][j] == 'S') {
			hasshift = true;
			continue;
		}
		int key = arr[i][j] - 'a';
		alpha[key] = 1;
		for (int k=0; k<n; k++) for (int l=0; l<m; l++) {
			if (arr[k][l] == 'S' && (i-k)*(i-k)+(j-l)*(j-l) <= x * x) {
				shift[key] = 1;
			}
		}
	}

	int q;
	cin >> q;
	cin >> s;
	for (int j=0; j<q; j++) {
		if (s[j] >= 'a') {
			int key = s[j] - 'a';
			if (!alpha[key]) {
				puts("-1");
				return 0;
			}
		}
		else {
			int key = s[j] - 'A';
			if (!hasshift || !alpha[key]) {
				puts("-1");
				return 0;
			}
			if (!shift[key]) {
				ct ++;
			}
		}
	}

	cout << ct << endl;

	return 0;
}
