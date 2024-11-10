#include <stdio.h>
#include <math.h>

int nhuan(int n) {
	return (n%4==0 && (n%100 !=0 || n%400==0));
}
int tinh(int x, int y) {
	if(x == 2) return nhuan(y) ? 29:28;
	if(x==4||x==6||x==9||x==11) return 30;
	return 31;	
}
int main() {
	// freopen(".inp", "r", stdin);
	// freopen(".out", "w", stdout);
	int a,b,c;
	scanf("%d/%d/%d", &a, &b, &c);
	if(a < 1 || a > tinh(b,c)) return 0;
	if(b < 1 || b > 12) return 0;
	if(c < 0) return 0;
	
	int x1, y1, z1, x2, y2, z2;
	x1 = a-1, y1 = b, z1 = c;
	x2 = a+1, y2 = b, z2 = c;
	if(x1 < 1) {
		y1--;
		if(y1 < 1) {
			y1 = 12;
			z1--;
		}
		x1 = tinh(y1,z1);
	}
	if(x2 > tinh(y2,z2)) {
		x2 = 1;
		y2++;
		if(y2 > 12) {
			y2 = 1;
			z2++;
		}
	}
	printf("Yesterday: %02d/%02d/%04d\n", x1,y1,z1);
	printf("Tomorrow: %02d/%02d/%04d.\n", x2,y2,z2);
	return 0;
	
}
	