#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;


signed main() {
	int n;
	scanf("%lld", &n);
	int m = n/2+1;
	if(m%2==0) {
		for(int i = 2; i <= m/2; i++) {
			for(int j = 1; j <= m/2-i+1;j++) printf("   ");
			for(int j = 1; j <= 2*i-2; j++) printf("*  ");
			for(int j = 1; j <= m/2-i;j++) printf("   ");
			for(int j = 1; j <= m/2-i+1;j++) printf("   ");
			for(int j = 1; j <= 2*i-2; j++) printf("*  ");
			for(int j = 1; j <= m/2-i+1;j++) printf("   ");
			printf("\n");
		}		
	}
	else {
		int t = m/2+1;
		for(int i = 3; i <= t; i++) {
			for(int j = 1; j <= t-i+1; j++) printf("   ");
			for(int j = 1; j <= 2*i-3; j++) printf("*  ");
			for(int j = 1; j <= t-i+1; j++) printf("   ");
			for(int j = 1; j <= t-i; j++) printf("   ");
			for(int j = 1; j <= 2*i-3; j++) printf("*  ");
			for(int j = 1; j <= t-i+1; j++) printf("   ");
			printf("\n");
			
		}
	}
	
	for(int i = 1; i <= n-n/2-m/2+1; i++) {
		for(int j = 1; j <= n; j++) printf("*  ");
		printf("\n");
	}
	for(int i = 1; i <= n/2; i++) {
		for(int j = 1; j <= i; j++) printf("   ");
		for(int j = 1; j <= n-2*i; j++) printf("*  ");
		for(int j = 1; j <= i; j++) printf("   ");
		printf("\n");
	}
	printf("\n");
	int a = n/2+1-3;
	for(int i = 1; i <= a; i++) printf("   ");
	printf("I LOVE PROPTIT!");
	
}