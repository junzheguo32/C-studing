#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void test(int a[])//监视窗口a,10可查看a[0] - a[9]
//{
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	test(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//1. 栈区内存的使用习惯是先使用高地址处的空间，再使用低地址处的空间
//2. 数组随着下标的增长地址是由低到高变化的
//3. 如果i和arr之间有适当的空间，利用数组的越界操作就可能会覆盖到i，就可能会导致死循环出现
//   比如说此处的&arr[0]为00affe14时数组尾地址&arr[9]就为00affe38
//因为i是在arr上面创建的，所以利用数组越界就能访问到&i为00affe44处的i变量了
//（此处i与arr尾部间隔12个字节，是因为在特定的环境以及vs编译器下）
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int j = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//
//	}
//	return 0;
//
//}

////#include<string.h>
////const char* arr2:表示函数不会修改源字符串
//#include<assert.h>//
////为什么返回值是char*类型？
////好处：可以继续使用返回值进行操作，比如链式操作，如my_strcpy(my_strcpy(dest, str1), str2);
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;//保存dest的起始地址
//	//当dest && str 值为0时，触发断言
//	assert(str != NULL && dest != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20]={ "XXXXXXXXXXXX"};
//	char arr2[] = { "hello bit" };
//	char* p = NULL;
//	p = my_strcpy(arr1, arr2);
//	printf("%s\n", p);//%s需要传入字符串 "首地址"
//	printf("%c\n", *p);//*p表示字符串的第一个字符
//	printf("%p\n", p);
//
//	return 0;
//}

//const修饰，保护数据
//int main()
//{
//	int a = 0;
//	int b = 0;
//	const int* p = &a;//const 在 * 左边
////==int const* p
	//*p = 10;//err
	
	//p = &b;//ok
	//int* const p = &a;//const 在 * 右边
	//*p = 10;//ok
	//p = &b;//err

	//const int* const p = &a;
	//*p = 10;//err
	//p = &b;//err
//	return 0;
//}

//#include<string.h>
//void main(void)
//{
//	char string[80];
//	strcpy(string, "Hello world from ");
//	strcat(string, "strcpy ");//strcat :增补，在原来字符串的后面增加内容
//	//但如果数组长度不够，仍执行strcpy则会栈溢出
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("String = %s\n", string);
//}

//#include <stddef.h>//size_t定义在此头文件中
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	//assert(str != NULL);
//	assert(str);//因为后续要解引用，所以需要保证str不是空指针（不能对空指针解引用）
//	//即使不加assert，传入NULL时，程序也会崩溃
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//指针相减，结果是两个指针之间相隔的元素个数
//}
//
//int main()
//{
//	char arr[] = { "hello bit" };
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);//%zu:专门用于输出size_t类型的数据
//
//	return 0;
//}

//常见的错误
//1. 编译型错误（语法错误）
//2. 链接型错误（链接期间发生的） -- 找不到  //ctrl+f 查找
//3. 运行时错误（调试）
//

//int main()
//{
//	printf("Hello github!\n");
//
//	return 0;
//}

//#include<stddef.h>
//
//int Equilateral(size_t a, size_t b, size_t c)
//{
//	//if(a == b == c)//err因为==是从左到右结合的，a==b的结果是0或1，再和c比较就不对了
//	if (a == b && b == c)
//	{
//		return 1;
//	}
//	return 0;
//}
//int Isosceles(size_t a, size_t b, size_t c)
//{
//	if (a == b || a == c || b == c)
//	{
//		return 1;
//	}
//	return 0;
//}
//int Ordinary(size_t a, size_t b, size_t c)
//{
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	size_t a = 0;
//	size_t b = 0;
//	size_t c = 0;
//	while (1)
//	{
//		scanf("%zu %zu %zu", &a, &b, &c);
//		if (Equilateral(a, b, c))
//		{
//			printf("Equilateral triangle\n");
//		}
//		else if (Isosceles(a, b, c))
//		{
//			printf("Isosceles triangle!\n");
//		}
//		else if (Ordinary(a, b, c))
//		{
//			printf("Ordinary triangle!\n");
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);//0 0 3 4 5
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//%x，以16进制打印
//	printf("%o\n", a);//%o，以8进制打印
//	printf("%b\n", a);
//
//
//	return 0;
//}

//#include<string.h>
//void fun(char* str, int left ,int right)
//{
//	char tmp = 0;
//	while (left <= right)
//	{
//		tmp = *(str + right);
//		*(str + right) = *(str + left);
//		*(str + left) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf("%s", arr);//scanf()遇到空格会停止读入
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;//长度 - 1 就是右下标
//	fun(arr, left,right);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//题目：求出1~100000之间的所有“水仙花数”并输出
//“水仙花数”是指一个n位数，其各位数的n次方之和正好等于该数本身，如153 = 1^3+5^3+3^3，则153是一个“水仙花数”
int main()
{
	int n = 0;
	
	return 0;
}
















