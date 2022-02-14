// youngjinp20
// 2021 06

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

const int MAX = 100;
int N;
int A[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++)
		cin >> A[i];

	sort(A, A+N);
	for (int i=0; i<N; i++) cout << A[i] << " ";

	return 0;
}
