#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;

bool snt(int n) {
	if(n<2) return 0;
	for(int i=2; i*i<=n; i++) if(n%i==0) return 0;
	return 1;
}
int tong(int n) {
	if(snt(n)) {
		int sum = 0;
		while(n!=0) {
			sum += n%10;
			n/=10;
		}
	return sum;
	}	
}

bool check(int n) {
	if(snt(n)) {
	int a = 0;
	while(n!=0) {
		a = n%10;
		if(snt(a)==0) return 0;	
		n/=10;
	}
	return 1;
	}
}
signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n; scanf("%lld", &n);
		if(snt(n) && check(n) && snt(tong(n))) printf("YES\n");
		else printf("NO\n");
	}
}




