#include <stdio.h>

int main(void){
	int i = 0;
	printf("0x%x\n", &i);
	printf("%p\n", &i);
	
	//p = (int)&i;

	printf("int占据字节%lu\n", sizeof(int));
	printf("&i占据字节%lu\n", sizeof(&i));

	return 0;
}
