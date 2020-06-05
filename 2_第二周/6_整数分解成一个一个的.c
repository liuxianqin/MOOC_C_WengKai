#include<stdio.h>

int main(){
	int x;
	
	scanf("%d", &x);

	x = 12345;

	int mask = 1;
	int t = x;

	while(t > 9){
		x /= 10;
		mask *= 10;
	}

	do {
		int d = x / mask; //6 2 2
	
		printf("%d", d);

		if( mask>9 ){ printf(" ");
		}

		x %= mask;     //22628 2628
		mask /= 10;
	} while( mask > 0);

	printf("\n");

	return 0;
}

