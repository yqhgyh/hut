求阶乘之和
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int sum1 = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum = sum * j;
//		}
//		sum1 = sum1 + sum;
//	}
//	printf("%d", sum1);
//	return 0;
//}
//求水仙花数
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//寻找完数
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
