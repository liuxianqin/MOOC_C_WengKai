#include<stdio.h>

int main(){
	int h1, m1;
	int h2, m2;
	int h, m;
	printf("输入第一个时间:\n");
	scanf("%d %d",&h1, &m1);
	printf("输入结束时间:\n");
	scanf("%d %d",&h2, &m2);

	h = h2 - h1;
	m = m2 - m1;
	if (m2-m1 < 0){
		m += 60;
		--h;
	}

	printf("时间差是%d小时%d分钟\n", h, m);

	return 0;
}
