#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	system("pause");
//}








//Debugģʽ�»���ѭ��  Releaseģʽ�²�����ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


//F9 -- �л��ϵ� -- ��F5�����ִ�е��ϵ㴦
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",10-i);
//	}
//	
//}





//F10 -- �����ִ��   F11 -- �����ִ��   shift+F11 -- ��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}









//�Զ����� �ֲ�����
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n",tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}







//���ö�ջ
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}













//���Է���ret������ Ӧ�ð�int ret=1; ���ڵ�һ��ѭ����
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d",&n); //eg: ����3 �������1��+2��+3��=1+2+6=9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}





//1,ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ�,��ʹ�õ͵�ַ�Ŀռ� 2.���������±�ĵ�����,��ַ���ɵ͵��߱仯
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}







//ģ��ʵ��strcpy����   strcpy()��������������,��һ���ǿ�����Ŀ�ĵ�,�ڶ����ǿ�����Դͷ
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //������\0��
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);  
//	return 0;
//}

//�Ż��汾1
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//�Ż��汾2
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); //����   Ϊ�治Ӱ��,Ϊ�ٻᱨ��
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ�,����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}









//const
//int main()
//{
//	const int num = 10;
//	/*const int* p = &num;  
//	*p = 20;//error            1. const ����ָ�������*���ʱ,���ε���*p,Ҳ����˵:����ͨ��p���ı�*p��num����ֵ*/
//	int* const p = &num;    // 2. const ����ָ�������*�ұ�ʱ,���ε���ָ�����p����,p���ܱ��ı�
//	int n = 100;
//	p = &n; //error
//	return 0;
//}











//ģ��ʵ��strlen����
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}