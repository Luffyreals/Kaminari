#include <stdio.h>
#include <math.h>
#include <string.h>

const int N = 1e3+5;
bool snt(int n) {
	if(n < 2) return 0;
	for(int i = 2; i*i <=n; i++)
		if(n%i == 0) return 0;
	return 1;
}
int a[N];
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <=n ;i++) scanf("%d", &a[i]);
	int cnt = 0;
	for(int i = 1; i <=n;i++) {
		if(snt(a[i])) cnt++;
		
	}
	if(snt(cnt)) printf("YES");
	else printf("NO");
	
}