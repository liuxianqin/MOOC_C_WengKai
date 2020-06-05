#include<stdio.h>

int main()
{
	int n = 10000;

	double sum = 0.0;
	double sign = 1.0;

	for(int i = 1; i<=n; i++){
		sum += sign/i;
		sign = -sign;
	}

	printf("%lf\n", sum);
	return 0;
}
