#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

signed main() {
	int t; scanf("%lld", &t);
	while(t--) {
		int n;
		scanf("%lld", &n);
		if(n==1) printf("45\n");
		else if(n==2) printf("495\n");
		else if(n==3) printf("49500\n");
		else if(n==4) printf("495000\n");
		else if(n==5) printf("49500000\n");
		else if(n==6) printf("495000000\n");
		else if(n==7) printf("49500000000\n");
		else if(n==8) printf("495000000000\n");
		else if(n==9) printf("49500000000000\n");
	    else if(n==10) printf("495000000000000\n");
		else if(n==11) printf("49500000000000000\n");
		
	}
	return 0;
}