#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e3+5;
const int M = 1e6+5;
int a[N][N], b[M];
signed main() {
	int t; scanf("%lld", &t);
	while(t--) {
		int n,m;
		scanf("%lld %lld", &n,&m);
		for(int i=1;i<=n;i++) 
			for(int j=1;j<=m;j++) scanf("%lld", &a[i][j]);
		
		int x=1, y=n, l=1, r=m;
		int cnt = 1;
		while(x<=y && l<=r) {
			for(int j = l; j<=r; j++) 
				b[cnt++] = 	a[x][j];
			x++;
			for(int i = x; i <=y; i++) 
				b[cnt++] = a[i][r];
			r--;
			if(x <= y) {
				for(int j = r; j>=l;j--) 
					b[cnt++]= a[y][j];
			y--;
			}
			if(l <= r) {
				for(int i = y; i >= x; i--) 
					b[cnt++] = a[i][l];
			}	
			l++;
		}	
		for(int i = cnt-1; i >=1; i--)
			printf("%lld ", b[i]);
		printf("\n");
	}
}