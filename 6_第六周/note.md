

### C 语言是有类型的语言

C 语言对类型的安全检查并不够



C以后的发展：

- 更加强调类型 C++，JAVA
- 更加弱化类型 JS，Python， Lisp

面向底层的语言是强调类型的



### C语言的几个类型

- 整数
	char, int, short, long, lang lang, bool
- 浮点数
	float, double, long double
- 指针
- 自定义类型

类型的不同：
- 类型的名字不一样
- 输入输出的格式化不同
- 数的范围不一样  char < short < int < float < double
- 在内存中占据的字节不一样 1-16个字节
- 表达形式不一样 补码 和 编码


### sizeof()

sizeof() 是静态的函数，在编译阶段就会被执行。所以不会执行（）内的语句。

```shell
/usr/include/stdio.h:27:10: fatal error: bits/libc-header-start.h: No such file or directory
   27 | #include <bits/libc-header-start.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.

解决：安装multilib 库

lxq@carbon:~/Desktop/WenKai/6_第六周$ ./test 
sizeof(char)=1
sizeof(short)=2
sizeof(int)=4
sizeof(long)=4
sizeof(long long)=8
sizeof(long double)=12

```

### 字长

寄存器的比特、总线的宽度
int： 一个寄存器的大小


### 整数

使用补码是一个好办法。

 00000001 （原码）
+11111111 （补码）
—————————
100000000 （溢出的0）

补码的意义：用补码和原码可以加出一个溢出的0000000

```c

char a = 255;
// a: 11111111 => -1
int b = 255;
// b: 00000000 00000000 00000000 11111111 => 255

```

### unsigned 不采用补码方式 
255U
255L

unsigned起初的目的是做纯二进制的数运算
