#include<stdio.h>

int main(){
	// 英尺 到 英寸 ： 12 倍关系
	// （foot + inch/12）*0.3048 -> 米 	
	printf("5 7表示5尺7寸,像这样输入:\n");
	
	double foot;
	double inch;

	scanf("%lf %lf", &foot, &inch);

	printf("身高是:%f米", ((foot + inch/12.0)*0.3048));

	

	return 0;
}
