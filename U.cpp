#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;


signed main() {
	int c,v0,v1,a,l;
	scanf("%lld %lld %lld %lld %lld",&c,&v0,&v1,&a,&l);
	int sum = v0;
	if(sum >= c) return printf("1"),0;
	sum = v0-l;
	int cnt = 1;
	int x = v0;
	for(int i = 1; i <= 10000; i++) {
		x = v0+i*a;
		if(x > v1) x = v1;
		sum += x;
		cnt++;
		if(sum >= c) break;
	
		sum -= l; 
	}
	printf("%lld", cnt);
}