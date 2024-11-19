#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long

const int N = 1e3+5;

signed main() {
	int t;
	scanf("%lld", &t);
	while(t--) {
		int n,m;
		scanf("%lld %lld", &n,&m);
		int a[105][105];
		int b[105]={0}, c[105]={0};
		bool check[105][105];
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++) {
				scanf("%lld", &a[i][j]);
				check[i][j] = 0;
			}
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++) 
				if(a[i][j]==1) check[i][j] = 1;
		
		for(int i = 1; i <= n; i++) 
			for(int j = 1; j <= m; j++) 
				if(check[i][j]) {
					b[i]=1;
					c[j]=1;
				}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(b[i]==1 || c[j]==1) printf("1 ");
				else printf("0 "); 
			}
			printf("\n");
		}
	}
}