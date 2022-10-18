#include<stdio.h>
#include<stdlib.h>
//int main(void)
//////{
//////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//////	int i = 0;
//////	int max = arr[0];
//////	int sz = sizeof(arr) / sizeof(arr[0]);
//////	for (i = 1; i < sz; i++)
//////	{
//////		if (arr[i] > max)
//////		{
//////			max = arr[i];
//////		}
//////	}
//////		printf("max=%d\n", max);
//////
//////	return 0;
//////}
////int main()
////{
////	int i = 0;
////	for (i = 1; i <= 9; i++)
////	{
////		int j = 1;
////		for (j = 1; j <= i; j++)
////		{
////			printf("%d*%d=%-2d", i, j, i * j);
////
////		}
////		printf("\n");
////	}
////
////	return 0;
////
////}
////{{
////	int a, b, c;
////	a = b = c = 1;
////	++a || ++b && ++c;
////	printf("%d %d %d", a, b, c);
////	return 0;
////
////}
////{
////	int x = 3, y = 4, z = 5;
////	int m = 0;
////	 m == x + 10 > y * z && y < 10 || y>12;
////	printf("%d", m);
////	return 0;
////}
//{
//	int a;
//	printf("请输入数字");
//	scanf_s("%d", &a);
//	if (a % 2 == 0)
//		printf("这是偶数\n");
//	else
//		printf("这是奇数\n");
//	return 0;
//
//}
// int is_prime(int n) 
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 500; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("% d", i);
//	}
//	return 0;
//}
////int is_leap_year(int y)
////{
////	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 ==0))
////		return 1;
////	else
////		return 0;
////}
////int main()
////{
////	int year = 0;
////	for(year=1000;year<=2000;year++)
////		if (is_leap_year(year) == 1)
////		{
////			printf("% d", year);
////		}
////	return 0;
////}
//int max(int a, int b)
//{
//	if (a > b)  return a;
//	else return b;
//}
//int main(void)
//{
//	int x, y, z;
//	printf("input two numbers:\n");
//	scanf("%d%d", &x, &y);
//	z = max(x, y);
//	printf("maxmum=%d", z);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz);
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) 
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是;%d\n", ret);
//	}
//}

//{printf("%d", printf("%d", printf("%d", printf("%d", 43))));
//return 0;
//}
//{
//int x=0;
//scanf_s("%d", &x);
//int mask = 1;
//int t = x;
//while (t > 9) 
//{
//	t /= 10;
//	mask *= 10;
//
//}
//printf("x=%d,mask=%d\n", x, mask);
//do 
//{
//	int d = x / mask;
//	printf("%d", d);
//	if (mask > 9)
//	{
//		printf(" ");
//	}
//	x %= mask;
//	mask /= 10;
//} while (mask > 0);
//printf("\n");
//return 0;
//}
//{
//	int  i, j, k, l, m;
//	char c = 3; 
//	for (i = 1; i <= 5; i++)    printf("\n"); 
//	for (i = 1; i <= 3; i++) { 
//		for (j = 1; j <= 32 - 2 * i; j++)  printf(" "); 
//		for (k = 1; k <= 4 * i + 1; k++)  printf("%c", c);
//		for (l = 1; l <= 13 - 4 * i; l++)  printf(" "); 
//		for (m = 1; m <= 4 * i + 1; m++)  printf("%c", c);
//		printf("\n"); 
//	}
//	for (i = 1; i <= 3; i++) { 
//		for (j = 1; j <= 24 + 1; j++)   printf(" "); 
//		for (k = 1; k <= 29; k++)   printf("%c", c);
//		printf("\n"); 
//	}
//	for (i = 7; i >= 1; i--) { 
//		for (j = 1; j <= 40 - 2 * i; j++)  printf(" "); 
//		for (k = 1; k <= 4 * i - 1; k++)  printf("%c", c);
//		printf("\n");  
//	}
//	for (i = 1; i <= 39; i++)    printf(" "); 
//	printf("%c\n", c);  
//	for (i = 1; i <= 5; i++)    printf("\n"); 
	/*{
		float x, y, z;
		float a;
		for (y = 1.5; y > -1.5; y=-0.1)
		{
			for (x = -1.5; x < 1.5; x=+ 0.05)
			{
				a = x * x + y * y - 1;
				char st = a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ';
				printf("%c", st);
			}
		}*/
//	
//int num[100] = { 0 };
//int p;
//while (1)
//{
//	for (p = 0; p < 100; p++) {
//		if (num[p] > 10) {
//			printf("%s", num[p] %2  ? "" : "");
//		}
//		else printf(" ");
//		if (num[p]-- < 0)
//			num[p] = rand() % 20;
//	}
//	system("color 4");
//	printf("\n");
//}
//return 0;
//}
//
//int jc(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * jc(n - 1);
//}
//int main()
//	{
//		int ret = 0;
//		int n = 0;
//      scanf_s("%d", &n);
//	  ret = jc(n);
//	  printf("%d", ret);
//	  return 0;
//	}
int jb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int z = 0;
	scanf_s("%d", &n);
	z = jb(n);
	printf("%d", z);
	return 0;
}
	