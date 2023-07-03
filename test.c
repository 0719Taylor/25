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








//Debug模式下会死循环  Release模式下不会死循环
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


//F9 -- 切换断点 -- 按F5代码会执行到断点处
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





//F10 -- 逐过程执行   F11 -- 逐语句执行   shift+F11 -- 跳出函数
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









//自动窗口 局部变量
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







//调用堆栈
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













//调试发现ret有问题 应该把int ret=1; 放在第一个循环里
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d",&n); //eg: 输入3 结果等于1！+2！+3！=1+2+6=9
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





//1,栈区的默认使用：先使用高地址处的空间,再使用低地址的空间 2.数组随着下标的的增长,地址是由低到高变化
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







//模拟实现strcpy函数   strcpy()函数有两个参数,第一个是拷贝的目的地,第二个是拷贝的源头
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //拷贝‘\0’
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);  
//	return 0;
//}

//优化版本1
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

//优化版本2
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); //断言   为真不影响,为假会报错
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间,包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
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
//	*p = 20;//error            1. const 放在指针变量的*左边时,修饰的是*p,也就是说:不能通过p来改变*p（num）的值*/
//	int* const p = &num;    // 2. const 放在指针变量的*右边时,修饰的是指针变量p本事,p不能被改变
//	int n = 100;
//	p = &n; //error
//	return 0;
//}











//模拟实现strlen函数
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