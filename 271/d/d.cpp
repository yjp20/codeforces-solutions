// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

struct Node {
	map<char, Node> children;
};

const int MAX = 1500;
char S[MAX+1];
char OK[27];
int K;

Node root;
int len;

int dfs(Node *cur, int depth) {
	int sum = 0;
	for (auto &e : cur->children) {
		sum += dfs(&e.second, depth+1);
	}
	return sum+1;
}

int main() {
	cin >> S;
	cin >> OK;
	cin >> K;

	len = strlen(S);

	for (int i=0; i<len; i++) {
		Node *cur = &root;
		int ct = 0;

		for (int j=0; i+j<len; j++) {
			int v = S[i+j] - 'a';
			if (OK[v] == '0') ct ++;
			if (ct > K) break;
			if (cur->children.find(S[i+j]) == cur->children.end())
				cur->children[S[i+j]] = {};
			cur = &(cur->children[S[i+j]]);
		}
	}

	cout << dfs(&root, 0)-1;

	return 0;
}
