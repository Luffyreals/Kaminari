#include <stdio.h>
#include <math.h>
#include <string.h>

const long long N = 1e6+5;

int tinh(int k) {
	return k*(k+1)/2;
} 

bool check(int k) {
	int x = 1;
	while(tinh(x) <= k) {
		if(tinh(x) == k) return 1;
		x++;
	}
	return 0;
}
long long a[N];
int main() {
	long long n;
	scanf("%lld", &n);
	int res = 0;
	for(int i = 1; tinh(i) <= n; i++) {
		res = n - tinh(i);
		if(check(res)) return printf("Yes"), 0;
					
		}
	
	printf("No");
	return 0;
	
}