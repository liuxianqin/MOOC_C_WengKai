#include<stdio.h>

int main(){

    // 不断用 上一个算式的 除数/上一个算式的余数 直到余数是0

    int dividend = 30;
    int divisor = 20;

    while (divisor !=0){

        int remainder = dividend % divisor;

        dividend = divisor;
        divisor = remainder;
    }

    printf("%d\n", dividend);
    return 0;
}