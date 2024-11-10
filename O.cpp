#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define int long long

const int N = 1e3+5;

int a[N][N];
signed main() {
	int n,m;
	scanf("%lld %lld", &n,&m);
	for(int i = 1; i <=n;i++)
		for(int j = 1;j <=m;j++) scanf("%lld", &a[i][j]);
	
	int cnt = 0;
	for(int i = 1; i <=n;i++){
		for(int j = 1;j <=m;j++) {
			if(a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1] && a[i][j] > a[i+1][j+1] && a[i][j] > a[i-1][j-1] && a[i][j] > a[i-1][j]
			&& a[i][j] > a[i-1][j+1] && a[i][j] > a[i][j-1] && a[i][j] > a[i+1][j-1])
				cnt++;
			
		}
	}
	printf("%lld", cnt);
}