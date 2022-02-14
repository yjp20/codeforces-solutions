#include<bits/stdc++.h>

using namespace std;

vector<int> prefix_function(string s) {
	int n = (int)s.length();
	vector<int> pi(n);
	for (int i = 1; i < n; i++) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j]) {
			printf("! j: %d  s[i]: %c  s[j]: %c\n", j, s[i], s[j]);
			j = pi[j-1];
		}
		if (s[i] == s[j])
			j++;
		pi[i] = j;
	}
	return pi;
}

int main() {
	int i = 0;
	for (auto e : prefix_function("ababcababb")) {
		cout << (++i) << ": " << e << endl;
	};
}
