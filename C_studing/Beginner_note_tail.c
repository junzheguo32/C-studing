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
//	printf("%s\n", p);//%s��Ҫ�����ַ����׵�ַ
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

int main()
{
	printf("Hello github!\n");

	return 0;
}







