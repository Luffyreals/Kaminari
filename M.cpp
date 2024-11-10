#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//#define int long long

const int N = 1e6+5;

int ss(const void*a, const void*b) {
	return (*(long long*)b - *(long long*)a);
}

int sss1(const void*a, const void*b) {
	return (*(char*)b - *(char*)a);
}
int sss2(const void*a, const void*b) {
	return (*(char*)a - *(char*)b);
}
long long tinh(long long n) {
	char c[8];
	sprintf(c, "%lld", n);
	if(c[0] == '-') {
		qsort(c+1,strlen(c)-1, sizeof(char), sss2);
		if(c[1] == '0') {
			for(int i=2; i < strlen(c); i++) {
				if(c[i] != '0') {
					char tmp = c[i];
					c[i] = c[1];
					c[1] = tmp;
					break;
				}
			}
		}
		return atoll(c);
		
	} else {
		qsort(c, strlen(c), sizeof(char), sss1);
		return atoll(c);
	}
}

long long a[N],b[N];
signed main() {

		int n;
		scanf("%d", &n);
		for(int i = 0; i<n;i++) scanf("%lld", &a[i]);
		for(int i = 0; i < n; i++) b[i] = tinh(a[i]);
		qsort(b,n,sizeof(long long), ss);
		for(int i = 0; i < n; i++) {
			printf("%lld ", b[i]);
		}
		
		
	
		return 0;
		
	
}