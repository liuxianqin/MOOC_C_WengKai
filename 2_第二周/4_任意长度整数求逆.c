#include<stdio.h>

int main(){
	int x = 12345; //一个整数
	int digit; //整数的一位
	int ret = 0;

	while(x>0){
		digit = x % 10;
		x /= 10;
		ret = ret * 10 + digit;
			
	}

	printf("%d\n", ret);

	return 0;

}
