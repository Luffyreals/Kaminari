#include <stdio.h>

int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long a,b,h;
	scanf("%lld %lld %lld", &a, &b, &h);
	long long cnt = 0;
	if(a == h) {
		printf("1\n");
		return 0;
		
	}
	long long res = 0;
	while(res < h) {
		res += a;
		cnt++;
		if(res >= h) break;
		res -= b;
		
	}
	printf("%lld\n", cnt);
	
	 
}