
### 地址

& 不能对没有地址的东西取地址，只能对变量取地址。



### 数组的地址

```c
int a[10];
printf("%p\n", a);
printf("%p\n", &a);
printf("%p\n", a[0]);
```


### 指针

`int* p,q;`
`int *p,q;`

p是一个指针，q是一个普通的整数

### 作为参数的指针

```c
void f(int *p);


int i=0;
f(&i);
```

### 指针的一个应用： 多个返回值的时候把结果带出来

```c

int a[] = {1,2,3,4,5,6,7,};
minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);

minmax(int a[], int len, int *min, int *max);
```


#### 以下的函数原型是等价的

```c
int ar[100];
// 参数中，int *ar和int ar[]是等价的

int sum(int *ar, int n);

int sum(int *, int);

int sum(int ar[], int n);

int sum(int [], int);
```

#### 数组变量是const指针
数组变量是一个不变的指针。

int b[] => int * const b



### 

int i;

指针不能被修改：
`int *const p3 = &i;`

所指的东西不能被修改:
`const int* p1 = &i;`
`int const* p2 = &i;`


保护数组不被破坏：
`int sum(const int a[], int length);`



