#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 3e6+5;

bool check[N];
void snt(int n) {
	for(int i = 2; i <= n; i++) check[i]= 1;
	for(int i = 2; i <= sqrt(n); i++) {
		if(check[i]) {
			for(int j =i*i; j <= n; j +=i) 
				check[j] = 0;
		}
	}
}


signed main() {
	int n,cnt=0;
	scanf("%lld", &n);
	snt(N);
	for(int i = 2; i <= 100; i++) {
		if(check[i]) {
			int p = 1;
			for(int j = 1; j <= 8; j++) {
				if(p > n/i) {
					p=n+1;
					break;
				}
				p*=i;
		}
		if(p>n) break;
		cnt++;
		}
	}
	for(int i = 2; i <= 3000000; i++) {
		if(check[i]) {
			for(int j=i+1; j <= 3000000; j++){
				if(check[j]) {
					if(i>sqrt(n) || j>sqrt(n)) break;
					int res = i*i;
					if(res > n/(j*j)) break;
					res *= (j*j);
					if(res > n) break;
					cnt++;
				}
			}
		}
	}
	printf("%lld", cnt);
}