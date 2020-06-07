#include<stdio.h>


void swap(int *x, int *y){

	int t=0;

	t = *x;
	*x = *y;
	*y = t;
}




int main(){


	int x = 1;
	int y = 2;

	swap(&x,&y);

	printf("x=%d, y=%d", x, y);

	return 0;
}
