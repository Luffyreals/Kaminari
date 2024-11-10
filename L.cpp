#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long n,m;
	scanf("%lld %lld", &n, &m);
	long long c = n-m;
	if(m == 0) printf("1\n");
	else if (m == n) printf("0\n");
	else printf("%lld\n", (c < m) ? c : m);
	return 0;	
}