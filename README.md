# hut\
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
	//前n项和
		int sum(int n)
	{
		if (n == 1)
			return 1;
		else
			return n + sum(n - 1);
	}
	//排序
		void sort(int arr[], int sz)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < sz - 1; i++)
		{
			for (j = 0; j < sz - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
	时间
		int main()
	{
		time_t t = time(NULL);
		printf("%d\n", t);
		return 0;
	}
	
	
