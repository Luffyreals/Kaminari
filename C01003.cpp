#include<stdio.h>
#include<math.h>
#define int long long

const int N = 1e6+5;

signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n;
		scanf("%lld", &n);
		printf("%lld\n", n*n);
	}
}