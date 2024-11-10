#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n,k;
	scanf("%d %d", &n,&k);
	if(k > n) return printf("%d", n), 0;
	if(k > n/2+1) return printf("%d", n+1),0;
	int res = 0;
	int cnt = 0;
	while(n>0) {
		cnt++;
		n--;
		res++;
		if(res >= k) {
			int x = res/k;
			n += x;
			res %= k;
		}
	}
	printf("%d", cnt);
	return 0;
}