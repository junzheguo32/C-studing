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
	//		printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
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
//		printf("�Ҳ���\n");
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
//		system("cls");	//system��һ���⺯��������ִ��ϵͳ���ͷ�ļ�stdlib.h��
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
//	//����Ϊ123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)	//�ַ����Ƚ��Ƿ������string.hͷ�ļ��µ�strcmp(str1,str2)����
//		{
//			printf("��¼�ɹ�\n");
//			Sleep(1000);
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			Sleep(1000);
//
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
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
//	fun(a);	//���鴫�ε�ʱ�򴫵ݵ�������Ԫ����Ԫ�صġ���ַ����
//			//����ַ��x86��������32λ����4���ֽڣ�����x64��������8���ֽ�
//	return 0;
//}

////////////////////////////////////////
//// ��������Ϸ
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
//	//RAND_MAX��32767--0x7fff��;
//	//1.���������(0~32767)
//	int ran = rand()%100 + 1;	//1~100��%100��һ��һ�ٸ�����+1����1��ʼ����������100������
//	//printf("%d\n", ran);
//	
//	//2.������
//	printf("�������:>");
//	
//	do {
//		scanf("%d", &guess);
//		if (guess < ran)
//		{
//			printf("��С��!\n");
//		}
//		else if (guess > ran)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("�¶�����������%d", guess);
//			break;
//		}
//	} while (1);
//	
//}
//
////ָ��
////int * p = NULL;//��ָ��
////int a = 0;
//
//int main()
//{
//	//srand������һ������������
//	srand((unsigned int)time(NULL));//ֻ�����һ�Σ�time������һ��ʱ���
//	int choice = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n\n");
//			break;
//		}
//	} while (choice);
//
//	return 0;
//}

//goto���(���ã�������������ȥ��)
//int main()
//{
//again:	
//	printf("heihei\n");
//	printf("hhh\n");
//	goto again;
// return 0;
//}

//����ʾ����(���ܿ纯������)
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

//goto���ĺô����ܹ������������ѭ��
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
//		//�������
//	return 0;
//}

////////////////////////////////////
//�ػ�����
//1.��������������һ�����ڹػ�
//2.������룺��������ȡ���ػ�
//

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };// ��ʼ��
//	system("shutdown -s -t 60");//-s���ػ�  -t 60������ʱ60s
//	printf("ע�⣺��ĵ��Խ���һ�����ڹػ�.\n");
//	printf("������룺��������ȡ���ػ�.\n");
//again:	
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("��ʱ�ػ�����ֹ~\n");
//	}
//	else
//	{
//		printf("�������!!\n");
//		goto again;
//	}
//
//	return 0;
//}

/////////////////////////////
////��������������ֵȻ�����
//
////�β�,����ı�ʵ�ε�ֵ������ַ������ָ��
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
////��ʵ�δ��ݲ�����ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
////
//int main()
//{
//	int a = 0, b = 0;	//ʵ��a��b
//
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//�ú���ʵ�����100~200֮�������

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

//дһ�������ж��ǲ�������
//��ӡ1000~2000֮�������
//�����жϹ���
//1.�ܱ�4���������Ҳ��ܱ�100����
//2.�ܱ�400����������

//��������Ӧ�㹻�򵥣����ھۣ������
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
//		//�ж��ǲ�������
//		if (is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}

////�ú������һ�����������Ķ��ֲ���
//
////�β�arr����ȥ�����飬ʵ������ָ�����
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
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	
//
//	return 0;
//}

//////////////////////////////
////��������
//#include <stdbool.h>
//#include <math.h>
//
//bool is_prime(int n)	//����ͷ�ļ�stdbool.h
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









