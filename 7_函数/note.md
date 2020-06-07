
### 函数先后关系

C的编译器自上而下的分析代码。


声明： 说明了函数的样子，检查定义和声明一致吗，不用让编译器自己猜测了。



### 参数传递的是什么？

```c

void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}
``` 
传递的是数值。每个函数有自己的变量空间，与其他函数没有关系。


### 本地变量
本地变量不会被默认初始化。
本地变量是定义在块里面的。大括号。


### void

确定没有参数：
void function(void);
确定有参数：
void function(int, int);


### main函数

int main(void){return 0;}

返回的0有用吗？

windows: if errorlevel 
bash: echo $?
Csh: echo $status


```shell
lxq@carbon:~/Desktop$ cat t.c 
#include<stdio.h>

int main(){	
	return 5;
}
lxq@carbon:~/Desktop$ ./a.out 
lxq@carbon:~/Desktop$ echo $?
5
```

