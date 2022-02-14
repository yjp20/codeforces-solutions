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

const int MAX = 1e5;
int N, K, P;
int A[MAX];
vector<int> odd, even;
vector<int> odd_partitions[MAX], even_partitions[MAX];

int main() {
	cin >> N >> K >> P;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		if (A[i]&1) odd.push_back(A[i]);
		else even.push_back(A[i]);
	}

	if (
		odd.size() < K-P ||
		(odd.size()-K+P) % 2 != 0 ||
		even.size()+(odd.size()-K+P)/2 < P
	) {
		cout << "NO";
		return 0;
	}

	int odd_it = 0;
	int even_it = 0;

	for (int i=0; i<K-P; i++) {
		odd_partitions[i].push_back(odd[odd_it++]);
	}

	for (int i=0; i<P; i++) {
		if (even_it < even.size()) {
			even_partitions[i].push_back(even[even_it++]);
		} else {
			even_partitions[i].push_back(odd[odd_it++]);
			even_partitions[i].push_back(odd[odd_it++]);
		}
	}

	auto &trash_dump = P ? even_partitions[0] : odd_partitions[0];
	while (odd_it < odd.size()) trash_dump.push_back(odd[odd_it++]);
	while (even_it < even.size()) trash_dump.push_back(even[even_it++]);

	cout << "YES" << endl;

	for (int i=0; i<P; i++) {
		cout << even_partitions[i].size() << " ";
		for (auto e : even_partitions[i]) cout << e << " ";
		cout << endl;
	}

	for (int i=0; i<K-P; i++) {
		cout << odd_partitions[i].size() << " ";
		for (auto e : odd_partitions[i]) cout << e << " ";
		cout << endl;
	}

	return 0;
}
