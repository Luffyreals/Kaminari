#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e6+5;


int a[405][405], f1[405][405], f2[405][405];
signed main() {
	int n; scanf("%lld", &n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%lld", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) {
			f1[i][j]=a[i][j];
			f2[i][j]=a[i][j];
			
			if(i>1 && j>1) f1[i][j] += f1[i-1][j-1];
			if(i>1 && j<n) f2[i][j] += f2[i-1][j+1];
		}
	}
	
	int maxx = -1e6+5;
	for(int k=1; k<=n; k++) {
		for(int i=k; i<=n; i++) {
			for(int j=k;j<=n;j++) {
				int sum1 = f1[i][j];
				int sum2 = f2[i][j-k+1];
				if(i>k) {
					sum1 -= f1[i-k][j-k];
					sum2 -= f2[i-k][j+1];
				}
				
				int res = sum1-sum2;
				if(res>maxx) maxx = res;
			}
		}
	}
	printf("%lld", maxx);
}