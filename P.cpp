#include <stdio.h>
#include <math.h>
#include <string.h>

int uoc(long long x, long long y) {
	while(x !=0) {
		long long a = x;
		x = y%x;
		y = a;		
	}
	return y;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long  a,x,y;
		scanf("%lld %lld %lld", &a,&x,&y);
		long long cnt = uoc(x,y);
		//printf("%lld\n", cnt);
		for(int i = 1; i <= cnt; i++)
			printf("%lld" , a);
		printf("\n");
	}
	
}