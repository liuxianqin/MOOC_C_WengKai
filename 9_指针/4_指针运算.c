#include <stdio.h>

int main(){
	char c[5] = {1,2,3,4,5,};
	char *p = c;
	printf("%p\n", p);
	printf("%p\n", p+1);

	int i[5] = {1,2,3,4,5,};
	int *q = i;
	printf("%p\n", q);
	printf("%p\n", q+1);

	return 0;
}
