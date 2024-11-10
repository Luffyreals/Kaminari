#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum,res = 1, cnt1 =0, cnt2=0;
	for(int i = 1; i <= n; i++) {
		sum = i;
		while(sum%2==0) {
			cnt1++;
			sum /= 2;
		}
		while(sum%5==0) {
			cnt2++;
			sum /=5;
			
		}
		res = (res*sum)%10;
	}
	for(int i = 1; i <= cnt1-cnt2;i++)
		res = (res*2) % 10;
	printf("%d", res);
	return 0;
}