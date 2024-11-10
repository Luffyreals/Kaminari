#include <stdio.h>


int main() {

	long long a,b,c;
	 scanf("%lld %lld %lld", &a, &b, &c);
	if(a > b) {
		  printf("0\n");
		  return 0;
	}
	if(a == 0 && c > b) {
		  printf("1\n");
		  return 0;
		}
	if(a == 0 && c > 1) 
		 printf("%lld\n", b / c - ((a - 1) / c) + 1);
	else printf("%lld\n", b / c - ((a - 1) / c));
	
	return 0;
	
}