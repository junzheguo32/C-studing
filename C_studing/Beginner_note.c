#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//函数的声明以及调用
//#include "add.h"
//
//#pragma comment(lib,"add.lib") //导入静态库
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int sum = add(a, b);
//	printf("a + b = %d\n", sum);
//
//	return 0;
//}

////%d 是打印有符号整数（有正负）
////%u 是打印无符号整数 
////输入：1234
////输出：1 2 3 4
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}
//#include<string.h>
//
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return (1 + my_strlen(arr + 1));
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


////冒泡排序
//void bubble_sort(int arr[],int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10]= {3,6,1,2,7,5,8,9,10,21};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

////数组名确实能表示首元素地址
////但是有2个例外
////1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
////2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//////////////////////////////////
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%u\n", (sizeof(arr)));
//
//	return 0;
//}

////递归打印一个整数的每一位
//void print(int i)
//{
//	
//	if (i / 10 != 0)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 1234;
//
//	print(i);
//
//	return 0;
//}

//int mul(int i)
//{
//	if (i >= 2)
//		return i * mul(i - 1);
//	else
//		return 1;
//
//}

//#include<string.h>

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int n = strlen(arr);
//	for (i = 0;i<n-1;i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			char c = 0;
//			c = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = c;
//
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//#include<string.h>

//void mirror(char* arr)
//{
//	
//	int left = 0;
//	int right = strlen(arr) - 1;
//	char tmp = '\0';
//	if (right >= 1)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];//2
//		arr[right] = '\0';//3
//		mirror(arr + 1);
//		arr[right] = tmp;//5
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdefg";
//	int n = strlen(arr);
//	mirror(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<string.h>
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return ((n % 10) + DigitSum(n / 10));
//	}
//	else return n;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int ret = DigitSum(num);
//	
//	printf("%d", ret);
//
//	return 0;
//}

//double n_k(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * n_k(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / n * n_k(n, k + 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double num = n_k(n, k);
//	printf("%lf\n", num);
//	return 0;
//}

//int main()
//{
//	char arX[] = "abcdefg";
//	char arY[] = { 'a','b','c','d','e','f','g' };
//	printf("%d\n", strlen(arX));//字符串长度，到\0为止
//	printf("%d\n", strlen(arY));
//	printf("%d\n", sizeof(arX) / sizeof(arX[0]));//数组长度
//	printf("%d\n", sizeof(arY) / sizeof(arY[0]));
//
//
//
//	return 0;
//}

//左移，右移只能对 “整数” 进行操作
//左移：乘2
//算术右移：右边丢弃，左边补原符号位（vs编译器使用的是算数右移）
//逻辑右移：右边丢弃，左边补0

//& - 按位与
//| - 按位或
//^ - 按位异或
//& | ^ 操作符的操作数为整数
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	int c = a << 1;//乘2的效果
//	b = a & b;
//	c = c | a;
//	a = a ^ b;
//	//int d = a >> -2;//不合理! 移位操作数得是正数
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

////不创建第三个变量，实现两个数交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	//a = a + b;//会有溢出的情况
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;//只能交换两个整数，速度没有创建第三个变量的算法快
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d, b = %d\n", a, b);
//	
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中的1的个数

//int main()
//{
//	int a = -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < (sizeof(a) * 8); i++)
//	{
//		count +=(a & 1);
//		a = a>>1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////~ 按二进制位取反
//int main()
//{
//	int a = 3;
//	printf("%d\n", ~a);
//	int b = 13;
//	b = b | (1 << 4);//仅第5位置1
//	printf("%d\n", b);
//	b &= (~(1 << 4));//仅第5位置0
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	unsigned c = -1;
//	printf("%u", c);
//	return 0;
//}

//&&左边为假，右边不计算
//||左边为真，右边不计算
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}

//表达式1 ? 表达式2 : 表达式3
//int CmpBigger(int x,int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	ret = CmpBigger(a, b);
//	printf("%d\n", ret);
//}

////逗号表达式，从左到右依次计算。结果式最后一个表达式的结果
//int  main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//
//(*ps).name == ps -> name
//#include<string.h>
//struct Stu {
//	char name[20];
//	int age;
//	double score;
//};
//
//void DefStu(struct Stu* ps)
//{
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//
//void PrintStu(struct Stu* ps)
//{
//	printf("name = %s\nage = %d\nscore = %lf\n", ps->name, ps->age, ps->score);
//}
//
//int main()
//{
//	struct Stu s = {0};
//	DefStu(&s);
//	PrintStu(&s);
//	return 0;
//}

////整形提升，（整形提升的目的是为了统一运算位数，所有只有需要送入cpu参与运算的时候才需要整形提升）
// 也可以理解为，有表达式的地方，就可能有整形提升，比如char，short类型变量相加等
//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110
//	char c = a + b;
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111110 - b
//	//00000000000000000000000010000011
//	//10000011 - c
//
//	//11111111111111111111111110000011 - 补码
//	//10000000000000000000000001111101 - -125
//	printf("%d\n", c);// -125
//
//	return 0;
//}

//int main()
//{
//	char a1 = 0xb6;
//	short b1 = 0xb600;
//	unsigned char a2 = 0xb6;
//	unsigned short b2 = 0xb600;
//	int c = 0xb6000000;
//
//	//11111111111111111111111110110110
//	if (a1 == 0xb6)
//		printf("a1 ");
//	//11111111111111111011011000000000
//	if (b1 == 0xb600)
//		printf("b1 ");
//	//00000000000000000000000010110110
//	if (a2 == 0xb6)
//		printf("a2 ");
//	//00000000000000001011011000000000
//	if (b2 == 0xb600)
//		printf("b2 ");
//	//10110110000000000000000000000000
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4 //需要送入CPU去执行+c运算，所以需要整形提升
//	printf("%u\n", sizeof(-c));//4 //同理
//
//	return 0;
//}

//小乐乐走台阶：一次可选择走一阶或者两阶，求一共有多少种走法
//输入一个整数n(1<=n<=30),--台阶数
//输出一个整数，走的方法数
//int fib(int n)
//{
//	if (n > 2)
//	{
//		return fib(n - 2) + fib(n - 1);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	do
//	{
//		scanf("%d", &n);
//		if (n >= 0 && n <= 30)
//		{
//			break;
//		}
//	} while (1);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//

//删除出一个整数中的数字

//void delete(int arr[],int n,int del,int* j)
//{
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[*j] = arr[i];
//			*j += 1;
//		}
//		
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	delete(arr,n,del,&count);
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	char c = 'a';//97
//	char d = 'A';//65
//	printf("a的ASCII值为：%d A的ASCII值为：%d\n", c, d);
//	printf("a - A = %d", c - d);//32
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf(" %c",&ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			ch -= 32;
//			printf("%c\n", ch);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			ch += 32;
//			printf("%c\n", ch);
//		}
//	}
//	return 0;
//}

//#include<ctype.h>
//
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	// scanf("%d",&ch);//return 1
//	// scanf("%d %d",&a,&b);//return 2;
//	//scanf读取失败的时候返回EOF
//	while (scanf("%c",&ch) != EOF)
//	{
//		if (islower(ch))
//		{
//			/*ch -= 32;*/
//			printf("%c\n", toupper(ch));
//		}
//		else if (isupper(ch))
//		{
//			/*ch += 32;*/
//			printf("%c\n", tolower(ch));
//		}
//		getchar();
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	//在%c之前加空格：跳过下一个字符之前的所有空白字符
//	while (scanf(" %c",&ch) != EOF && ch != '0')
//	{
//		//if (islower(ch) || isupper(ch))
//		if(isalpha(ch))//isalpha(c):判断c是不是字母
//		{
//			printf("%c is\n", ch);
//		}
//		else
//		{
//			printf("%c is not\n", ch);
//		}
//	}
//	return 0;
//}

//输出三个数中最大值(三目操作符)
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a>((b>c)?b:c)) ? (a) : (((b>c)?b:c));
//	printf("%d\n", max);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	int j = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		//if (i == ((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)))
//		//{
//		//	printf("%d ", i);
//		//}
//		int sum = 0;
//		for (j = 1; j < 5; j++)
//		{
//			sum += ((i / (int)pow(10, j)) * (i % (int)pow(10, j)));//%右边必须是整形
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////指针类型
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;//a = 0x11223300
//
//	//结论1：指针类型决定了，指针在被解引用时访问几个字节
//	//如果是int*，解引用时访问4个字节
//	//如果是char*，解引用时访问1个字节
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa = %p\n", pa);		                            
//	printf("pa + 1 = %p\n", pa + 1);
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//	//结论2：指针的类型决定了指针+-1操作时，跳过几个字节
//	//即决定了指针的步长
//
//	return 0;
//}

////野指针：指针指向的位置是不可知的（随机的，不正确的）
////原因：1.未初始化 2.越界访问
//int main()
//{
//	int* p;//未初始化，没有明确的指向
//	//一个局部变量不初始化，放的是随机值：0Xcccccccc
//	//
//	*p = 10;//非法访问内存，这里的p就是野指针
//	return 0;
//}

//越界访问->形成野指针
//arr 0 ~ 9
//*p 0 ~ 10
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; ++p, i++)
//	{
//		*p = i;
//	}
//
//
//	return 0;
//}


//int* test()
//{
//
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();/*当test()调用完，内存将收回分配给test()函数的空间，导致无法在主函数里，继续通过
//	指针p访问指向的空间里的内容，此时的p就是野指针了*/
//
//	return 0;
//}

////避免野指针
////1.及时初始化指针变量，具体指向不明确时，可：int* p =NULL;
//
//int main()
//{
//	int* p3 = NULL;
//	// ...
//	if (p3 != NULL)//不能对内存已分配的空间，如"0"地址，赋值
//	{
//		*p3 = 100;
//	}
//	return 0;
//}

////指针+-，指针赋值
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	for (p = arr; p < &arr[10];)
//	{
//		*p++ = 1;//*p = 1; p++;
//	}
//	return 0;
//}

//| 指针 - 指针 |（绝对值），得到的是指针之间的元素个数
//不是所有的指针都能相减，指向同一块空间的指针才能相减
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[10] - &arr[0]);// 10
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* left = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - left;
//}
//
//int main()
//{
//	char ch = "abcdef";
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//};

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//}p1,p2;//p1和p2是俩个全局的结构体变量

//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//};
//
//struct Stu
//{
//	struct Peo p;//!!!
//	int num;
//	float f;
//};
//
//void print1(struct Peo* pp)
//{
//	printf("%s %s %s %d\n", pp->name, pp->tele, pp->sex, pp->height);//结构体指针->成员变量
//
//}
//
//void print2(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);//结构体变量.成员变量
//}
//
//int main()
//{
//	struct Peo p1 = { "张三" , "15588329084" , "男" , 181};//结构体创建变量
//	struct Stu st1 = { {"李四" , "15596666888","女",165},100,3.14f };
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
//	printf("%s %s %s %d %d %f\n", st1.p.name, st1.p.tele, st1.p.sex, st1.p.height, st1.num, st1.f);
//
//	print1(&p1);
//	print2(p1);
//
//	return 0;
//}

//int count_differ_num(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for(i = 0;i<32;i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_differ_num(int a, int b)
//{
//	int c = a ^ b;//相同为0，相异为1
//	int count = count_num_of_1(c);//统计为1的个数
//	return count;
//}
//
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);//!!!
//	}
//	return count;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count = count_differ_num(a, b);
//	
//	printf("%d\n", count);
//	
//	return 0;
//
//}

//写一个函数返回参数二进制中 1 的个数

//int count_num_of_1(int num)//无法求解负数
//int count_num_of_1(unsigned int num)
//{
//	int count = 0;
//	while (num)// num != 0
//	{
//		if (num & 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//
//}

//int count_num_of_1(int num)
//{
//	int count = 0;
//	int i = 0;
//	for(i = 0;i<32;i++)//32次
//	{
//		if (num & 1)
//		{
//			count++;
//		}
//		num >>= 1;
//		if (num == 0)
//		{
//			break;
//		}
//	}
//	return count;
//
//}

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);//!!!
//	}
//	return count;
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = count_num_of_1(num);
//	printf("%d", count);
//	return 0;
//}

////全局变量，静态变量都放在静态区
////全局变量，静态变量不初始化的时候，默认会被初始化为0
////局部变量，放在栈区，不初始化，默认值是随机值
////
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//signed(valiable)返回的是无符号整形
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}











