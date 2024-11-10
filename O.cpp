#include <stdio.h>
#include <math.h>

int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	long long n;
	scanf("%lld", &n);
	long long m = sqrt(n);
	if(m*m == n) printf("YES");
	else printf("NO");
	return 0;
}