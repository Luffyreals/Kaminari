#include <stdio.h>
#include <math.h>
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	
	long long x,y,z;
	scanf("%lld %lld %lld", &x, &y, &z);
	if (x < 0 || y < 0 || z < 0) return 0;
	if (x == y || x == z || y == z) return 0;

	long long a = llabs(x-z);
	long long b = llabs(y-z);

	if(a > b)  printf("Toan\n");
	else if (a < b)  printf("Trung\n");
	else printf("Hoa.\n");
	
	return 0;
}