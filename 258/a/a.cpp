// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e5;
char A[MAX+1];

int main() {
	cin >> A;
	int len = strlen(A);
	bool removed = false;

	for (int i=0; i<len-1; i++) {
		if (!removed && A[i] == '0') {
			removed = true;
			continue;
		}
		cout << A[i];
	}

	if (removed) cout << A[len-1];

	return 0;
}
