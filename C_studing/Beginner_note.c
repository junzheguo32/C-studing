#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�����������Լ�����
//#include "add.h"
//
//#pragma comment(lib,"add.lib") //���뾲̬��
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

////%d �Ǵ�ӡ�з�����������������
////%u �Ǵ�ӡ�޷������� 
////���룺1234
////�����1 2 3 4
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


////ð������
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

////������ȷʵ�ܱ�ʾ��Ԫ�ص�ַ
////������2������
////1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
////2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
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

////�ݹ��ӡһ��������ÿһλ
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
//	printf("%d\n", strlen(arX));//�ַ������ȣ���\0Ϊֹ
//	printf("%d\n", strlen(arY));
//	printf("%d\n", sizeof(arX) / sizeof(arX[0]));//���鳤��
//	printf("%d\n", sizeof(arY) / sizeof(arY[0]));
//
//
//
//	return 0;
//}

//���ƣ�����ֻ�ܶ� �������� ���в���
//���ƣ���2
//�������ƣ��ұ߶�������߲�ԭ����λ��vs������ʹ�õ����������ƣ�
//�߼����ƣ��ұ߶�������߲�0

//& - ��λ��
//| - ��λ��
//^ - ��λ���
//& | ^ �������Ĳ�����Ϊ����
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	int c = a << 1;//��2��Ч��
//	b = a & b;
//	c = c | a;
//	a = a ^ b;
//	//int d = a >> -2;//������! ��λ��������������
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

////������������������ʵ������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	//a = a + b;//������������
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;//ֻ�ܽ��������������ٶ�û�д����������������㷨��
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d, b = %d\n", a, b);
//	
//	return 0;
//}

//��д����ʵ�֣���һ�������洢���ڴ��еĶ������е�1�ĸ���

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

////~ ��������λȡ��
//int main()
//{
//	int a = 3;
//	printf("%d\n", ~a);
//	int b = 13;
//	b = b | (1 << 4);//����5λ��1
//	printf("%d\n", b);
//	b &= (~(1 << 4));//����5λ��0
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

//&&���Ϊ�٣��ұ߲�����
//||���Ϊ�棬�ұ߲�����
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}

//���ʽ1 ? ���ʽ2 : ���ʽ3
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

////���ű��ʽ�����������μ��㡣���ʽ���һ�����ʽ�Ľ��
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

////����������������������Ŀ����Ϊ��ͳһ����λ��������ֻ����Ҫ����cpu���������ʱ�����Ҫ����������
// Ҳ�������Ϊ���б��ʽ�ĵط����Ϳ�������������������char��short���ͱ�����ӵ�
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
//	//11111111111111111111111110000011 - ����
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
//	printf("%u\n", sizeof(+c));//4 //��Ҫ����CPUȥִ��+c���㣬������Ҫ��������
//	printf("%u\n", sizeof(-c));//4 //ͬ��
//
//	return 0;
//}

//С������̨�ף�һ�ο�ѡ����һ�׻������ף���һ���ж������߷�
//����һ������n(1<=n<=30),--̨����
//���һ���������ߵķ�����
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

//ɾ����һ�������е�����

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
//	printf("a��ASCIIֵΪ��%d A��ASCIIֵΪ��%d\n", c, d);
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
//	//scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݵĸ���
//	// scanf("%d",&ch);//return 1
//	// scanf("%d %d",&a,&b);//return 2;
//	//scanf��ȡʧ�ܵ�ʱ�򷵻�EOF
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
//	//��%c֮ǰ�ӿո�������һ���ַ�֮ǰ�����пհ��ַ�
//	while (scanf(" %c",&ch) != EOF && ch != '0')
//	{
//		//if (islower(ch) || isupper(ch))
//		if(isalpha(ch))//isalpha(c):�ж�c�ǲ�����ĸ
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

//��������������ֵ(��Ŀ������)
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
//			sum += ((i / (int)pow(10, j)) * (i % (int)pow(10, j)));//%�ұ߱���������
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////ָ������
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;//a = 0x11223300
//
//	//����1��ָ�����;����ˣ�ָ���ڱ�������ʱ���ʼ����ֽ�
//	//�����int*��������ʱ����4���ֽ�
//	//�����char*��������ʱ����1���ֽ�
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
//	//����2��ָ������;�����ָ��+-1����ʱ�����������ֽ�
//	//��������ָ��Ĳ���
//
//	return 0;
//}

////Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�
////ԭ��1.δ��ʼ�� 2.Խ�����
//int main()
//{
//	int* p;//δ��ʼ����û����ȷ��ָ��
//	//һ���ֲ���������ʼ�����ŵ������ֵ��0Xcccccccc
//	//
//	*p = 10;//�Ƿ������ڴ棬�����p����Ұָ��
//	return 0;
//}

//Խ�����->�γ�Ұָ��
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
//	int* p = test();/*��test()�����꣬�ڴ潫�ջط����test()�����Ŀռ䣬�����޷��������������ͨ��
//	ָ��p����ָ��Ŀռ�������ݣ���ʱ��p����Ұָ����*/
//
//	return 0;
//}

////����Ұָ��
////1.��ʱ��ʼ��ָ�����������ָ����ȷʱ���ɣ�int* p =NULL;
//
//int main()
//{
//	int* p3 = NULL;
//	// ...
//	if (p3 != NULL)//���ܶ��ڴ��ѷ���Ŀռ䣬��"0"��ַ����ֵ
//	{
//		*p3 = 100;
//	}
//	return 0;
//}

////ָ��+-��ָ�븳ֵ
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

//| ָ�� - ָ�� |������ֵ�����õ�����ָ��֮���Ԫ�ظ���
//�������е�ָ�붼�������ָ��ͬһ��ռ��ָ��������
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
//}p1,p2;//p1��p2������ȫ�ֵĽṹ�����

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
//	printf("%s %s %s %d\n", pp->name, pp->tele, pp->sex, pp->height);//�ṹ��ָ��->��Ա����
//
//}
//
//void print2(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);//�ṹ�����.��Ա����
//}
//
//int main()
//{
//	struct Peo p1 = { "����" , "15588329084" , "��" , 181};//�ṹ�崴������
//	struct Stu st1 = { {"����" , "15596666888","Ů",165},100,3.14f };
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
//	int c = a ^ b;//��ͬΪ0������Ϊ1
//	int count = count_num_of_1(c);//ͳ��Ϊ1�ĸ���
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

//дһ���������ز����������� 1 �ĸ���

//int count_num_of_1(int num)//�޷���⸺��
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
//	for(i = 0;i<32;i++)//32��
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

////ȫ�ֱ�������̬���������ھ�̬��
////ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
////�ֲ�����������ջ��������ʼ����Ĭ��ֵ�����ֵ
////
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//signed(valiable)���ص����޷�������
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











