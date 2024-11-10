#include <stdio.h>
#include <math.h>

int uoc(long long a, long long b) {
	while(a != 0) {
		long long res = a;
		a = b%a;
		b = res;
	}
	return b;
}
int boi(long long a, long long b) {
	return a/uoc(a,b)*b;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long x,y,z,n;
		scanf("%lld %lld %lld %lld", &x,&y,&z,&n);
		
		long long res = boi(boi(x,y),z); 
		long long cnt = 1;
		for(int i = 1; i < n; i++) cnt *= 10;
		long long ans = (cnt+res-1)/res * res;
		if(ans < cnt*10 && ans >= cnt) printf("%lld\n", ans);
		else printf("-1\n");
	}
	return 0;
}