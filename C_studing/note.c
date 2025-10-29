#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	printf("printf(\"hello world!\\n\");\n");
//	printf("cout <<  \"hello world!\" << endl;");
//	return 0;
//}


//int main() {
//	int i = 0 , j = 0;
//	int max = 0;
//	for (i; i < 4; i++)
//	{
//		scanf("%d", &j);
//		if (max <= j)
//		{
//			max = j;
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main() {
//	int arr[4];
//	int i = 0;
//	int max = 0;
//	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
//	for (i; i < 4; i++) {
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d", max);
//	return 0;
//
// }
//#define PI  3.1415926
// 
//
//int main() {
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v  = PI * (4 / 3.0)   * (r * r * r);
//	printf("%.3lf\n", v);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k != 0; i++, k++)
//		k++;
//
//	return 0;
//
// }


//int main() 
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	
//	return 0;
//}

//int jiecheng(int n)
//{
//	if (n >= 1)
//		return (jiecheng(n - 1) * n);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = jiecheng(n);
//	printf("%d", res);
//	return 0;
//
//}

//int jiecheng(int n)
//{
//	if (n > 1)
//		return (jiecheng(n - 1) * n);
//	else
//		return 1;
//}
//
//int main() {
//	int i = 0;
//	int n = 0;
//	int result = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		result += jiecheng(i);
//	}
//
//	printf("%d", result);
//
//	return 0;
//}

//int main() {
//	int i = 1;
//	int n = 0;
//	int result = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//		sum += result;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 8 , 9 , 10 , 11 };
//	//                 0  1    2   3    4   5  6   7  8     9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int find = 7;
//	int mid = 0;
//	int left = 0;
//	int right = sz - 1;
	//do
	//{
	//	mid = (left + right) / 2;
 //		if (find == arr[mid])
	//	{
	//		printf("找到了，下标为%d\n", mid);
	//		break;
	//	}
	//	else if (find < arr[mid])
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		left = mid + 1;
	//	}
	//} while (left<=right);
//	while(left<=right)
//	{
//		mid = left+(right-left)/2;
//		if (find == arr[mid])
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		else if (find < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "welcome to bit!!!!";
//	printf("%s", str);
//	int i = 0, j = 0;
//	int n = strlen(str);
//	if (n % 2 == 0)
//	{
//		for (i = 0; i < (1 + n / 2); i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (j < i || j > (n - i-1))
//				{
//					printf("%s", str[j]);
//				}
//				else
//				{
//					printf("#");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	else
//	{
//		for (i = 0; i < (2 + n / 2); i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (j < i || j >(n - i -        1))
//				{
//					printf("%s", str[j]);
//				}
//				else
//				{
//					printf("#");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);	//Windows.h
//
//		system("cls");	//system是一个库函数，可以执行系统命令（头文件stdlib.h）
//
//		left++;
//		right--;
//
//	}
//	printf("%s", arr2);
//
//	return 0;
//}

//#include <string.h>
//#include <Windows.h>
//
//int main()
//{
//	int i = 0;
//	char password[10] = {0};
//	//密码为123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)	//字符串比较是否相等用string.h头文件下的strcmp(str1,str2)函数
//		{
//			printf("登录成功\n");
//			Sleep(1000);
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//			Sleep(1000);
//
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入密码错误，退出程序\n");
//		Sleep(1000);
//	}
//
//
//	return 0;
//}

//void fun(int a[])
//{
//	printf("%zu", sizeof(a));
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(a[1]));
//	fun(a);	//数组传参的时候传递的是数组元素首元素的【地址】，
//			//而地址在x86环境下是32位（即4个字节），在x64环境下是8个字节
//	return 0;
//}

////////////////////////////////////////
//// 猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*******  1.play *******\n");
//	printf("*******  0.exit *******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//RAND_MAX（32767--0x7fff）;
//	//1.生成随机数(0~32767)
//	int ran = rand()%100 + 1;	//1~100，%100：一共一百个数；+1：从1开始往后连续的100个整数
//	//printf("%d\n", ran);
//	
//	//2.猜数字
//	printf("请猜数字:>");
//	
//	do {
//		scanf("%d", &guess);
//		if (guess < ran)
//		{
//			printf("猜小了!\n");
//		}
//		else if (guess > ran)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("猜对啦，数字是%d", guess);
//			break;
//		}
//	} while (1);
//	
//}
//
////指针
////int * p = NULL;//空指针
////int a = 0;
//
//int main()
//{
//	//srand：设置一个随机数的起点
//	srand((unsigned int)time(NULL));//只需调用一次，time：产生一个时间戳
//	int choice = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n\n");
//			break;
//		}
//	} while (choice);
//
//	return 0;
//}

//goto语句(少用！！！，跳来跳去的)
//int main()
//{
//again:	
//	printf("heihei\n");
//	printf("hhh\n");
//	goto again;
// return 0;
//}

//错误示范！(不能跨函数调用)
//void fun()
//{
//again:
//}
//
//int main() {
//	printf("heihei\n");
//	printf("hhh\n");
//	goto again;
//	return 0;
//}

//goto语句的好处：能够快速跳出多层循环
//int main()
//{
//	for (;;)
//		for (;;)
//		{
//			for (;;)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//error:
//	if(disaster)
//		//处理情况
//	return 0;
//}

////////////////////////////////////
//关机程序
//1.电脑运行起来后，一分钟内关机
//2.如果输入：我是猪，就取消关机
//

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };// 初始化
//	system("shutdown -s -t 60");//-s：关机  -t 60：倒计时60s
//	printf("注意：你的电脑将在一分钟内关机.\n");
//	printf("如果输入：我是猪，就取消关机.\n");
//again:	
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("定时关机已终止~\n");
//	}
//	else
//	{
//		printf("输入错误!!\n");
//		goto again;
//	}
//
//	return 0;
//}

/////////////////////////////
////交换两个整数的值然后输出
//
////形参,若需改变实参的值，传地址，需用指针
//void Swap(int* pa,int* pb)
//{
//	//1 //int c = *pa;//c=a
//		//*pa = *pb;	//a=b
//		//*pb = c;	//b=c
//	
//	//2 
//	*pb = *pa + *pb;
//	*pa = *pb - *pa;
//	*pb = *pb - *pa;
//}
//
////
////当实参传递参数的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
////
//int main()
//{
//	int a = 0, b = 0;	//实参a，b
//
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//用函数实现输出100~200之间的素数

//#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}

//写一个函数判断是不是闰年
//打印1000~2000之间的闰年
//闰年判断规则
//1.能被4整除，并且不能被100整除
//2.能被400整除是闰年

//函数功能应足够简单，高内聚，低耦合
//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || x % 400 == 0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是不是闰年
//		if (is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}

////用函数完成一个有序整数的二分查找
//
////形参arr看上去是数组，实际上是指针变量
//int search(int arr[], int x, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 8;
//	int arr[10] = { 1,2,3,4,5,6,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	if (search(arr, x, left, right))
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	
//
//	return 0;
//}

//////////////////////////////
////布尔类型
//#include <stdbool.h>
//#include <math.h>
//
//bool is_prime(int n)	//引用头文件stdbool.h
//{
//	int i = 0;
//
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("sizeof(bool) = %d\n", sizeof(bool));//1
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}









