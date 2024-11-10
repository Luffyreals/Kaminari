#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
		scanf("%d %d", &a,&b);
		if((a%2) != (b%2)) printf("No\n");
		else {
			char x[7],y[7];
			sprintf(x,"%d",a);
			sprintf(y,"%d",b);	
			if(strlen(x) != strlen(y)) printf("No\n");
			else {
				char z[7];
				for(int i = 0; i < strlen(y); i++) 
					z[i] = y[strlen(y)-1-i];
				z[strlen(y)] = '\0';
				
				int ans = strcmp(x,z);
				if(ans == 0) printf("Yes.\n");
				else printf("No\n");
				
			}

		}
	}
}