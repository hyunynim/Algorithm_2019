#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, k; scanf("%d %d %d", &n, &m, &k);
	if (n > min(m, k))
		printf("No");
	else
		printf("Yes");
}