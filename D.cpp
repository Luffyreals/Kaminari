#include <stdio.h>

int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long a,b,k;
	scanf("%lld %lld %lld", &a, &b, &k);
	long long cnt = k/2;
	long long cntt = (k-1)/2 +1;
	if(k % 2 == 0)  printf("%lld\n", a * cnt - b * cnt);
	else if (k%2 == 1) printf("%lld\n", a * cntt - b * (cntt - 1));
	return 0;
}