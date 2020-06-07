

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

### 8进制 16进制


为什么会有8进制：早期计算机的字长是12位，用8进制比较方便。

选择整数类型的原则：如果没有特殊需要，就使用int。
内存对齐=> short对齐成int，short反而没更快的效果了。


### 浮点类型

float 32位 有效数字：7  
double 64位 有效数字：15

浮点数在靠近0的区域无法表达。
浮点可以表达inf、nan。

4.0/0.0 inf
-4.0/0.0 -inf
0.0/0.0 inf
12/0 编译错误，因为整数不表达无穷大

%e ： 科学计数法

浮点数相等的判断：
不能直接判断， 需要fabs(f1-f2) < 1e-12 这样的方式。


计算器内部 采用BCD码计算。
[安卓计算器BUG](https://www.guokr.com/article/27173)

选择浮点类型：没有特殊需要，直接用double


### 字符类型

%c


'a'-'A' => 32
'A'-'a' => -32
把一个大写字母变成小写字母  `C+'a'-'A'`

把一个小写字母变成大写字母   `c+'A'-'a'` 


### 逃逸字符 

两个符号连起来算一个字符

回退字符
`\b`  不同的终端绘制的方式不同。

`\n` 换行 来自打字机调节卷轴 书写下一行的动作。
`\r` 回车 来自打字机打完一行 把车归位的动作。

### 自动类型转换 强制类型转换

`(type)value` 不会改变value的数值


### bool 类型
需要引用：
`#include <stdbool.h>`



### 逻辑运算

`4<x<6`

`4<x` 只有两种情况 0 和 1， 无论0 还是 1 都小于6。
所以应该写为`4<x && x>6`


单目运算符的优先级 高于 双目运算符

### 条件运算符
。。。


### 逗号运算符

赋值的优先级高于等号。

可以在for中使用：
`for(i = 0, j=10; i<j; i++,j--)`
