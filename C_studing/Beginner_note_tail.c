#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void test(int a[])//���Ӵ���a,10�ɲ鿴a[0] - a[9]
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

//1. ջ���ڴ��ʹ��ϰ������ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//2. ���������±��������ַ���ɵ͵��߱仯��
//3. ���i��arr֮�����ʵ��Ŀռ䣬���������Խ������Ϳ��ܻḲ�ǵ�i���Ϳ��ܻᵼ����ѭ������
//   ����˵�˴���&arr[0]Ϊ00affe14ʱ����β��ַ&arr[9]��Ϊ00affe38
//��Ϊi����arr���洴���ģ�������������Խ����ܷ��ʵ�&iΪ00affe44����i������
//���˴�i��arrβ�����12���ֽڣ�����Ϊ���ض��Ļ����Լ�vs�������£�
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
////const char* arr2:��ʾ���������޸�Դ�ַ���
//#include<assert.h>//
////Ϊʲô����ֵ��char*���ͣ�
////�ô������Լ���ʹ�÷���ֵ���в�����������ʽ��������my_strcpy(my_strcpy(dest, str1), str2);
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;//����dest����ʼ��ַ
//	//��dest && str ֵΪ0ʱ����������
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
//	printf("%s\n", p);//%s��Ҫ�����ַ��� "�׵�ַ"
//	printf("%c\n", *p);//*p��ʾ�ַ����ĵ�һ���ַ�
//	printf("%p\n", p);
//
//	return 0;
//}

//const���Σ���������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	const int* p = &a;//const �� * ���
////==int const* p
	//*p = 10;//err
	
	//p = &b;//ok
	//int* const p = &a;//const �� * �ұ�
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
//	strcat(string, "strcpy ");//strcat :��������ԭ���ַ����ĺ�����������
//	//��������鳤�Ȳ�������ִ��strcpy���ջ���
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("String = %s\n", string);
//}

//#include <stddef.h>//size_t�����ڴ�ͷ�ļ���
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	//assert(str != NULL);
//	assert(str);//��Ϊ����Ҫ�����ã�������Ҫ��֤str���ǿ�ָ�루���ܶԿ�ָ������ã�
//	//��ʹ����assert������NULLʱ������Ҳ�����
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//ָ����������������ָ��֮�������Ԫ�ظ���
//}
//
//int main()
//{
//	char arr[] = { "hello bit" };
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);//%zu:ר���������size_t���͵�����
//
//	return 0;
//}

//�����Ĵ���
//1. �����ʹ����﷨����
//2. �����ʹ��������ڼ䷢���ģ� -- �Ҳ���  //ctrl+f ����
//3. ����ʱ���󣨵��ԣ�
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
//	//if(a == b == c)//err��Ϊ==�Ǵ����ҽ�ϵģ�a==b�Ľ����0��1���ٺ�c�ȽϾͲ�����
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
//	printf("%x\n", a);//%x����16���ƴ�ӡ
//	printf("%o\n", a);//%o����8���ƴ�ӡ
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
//	//scanf("%s", arr);//scanf()�����ո��ֹͣ����
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;//���� - 1 �������±�
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

//��Ŀ�����1~100000֮������С�ˮ�ɻ����������
//��ˮ�ɻ�������ָһ��nλ�������λ����n�η�֮�����õ��ڸ���������153 = 1^3+5^3+3^3����153��һ����ˮ�ɻ�����
int main()
{
	int n = 0;
	
	return 0;
}
















