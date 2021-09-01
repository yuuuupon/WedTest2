#include<stdio.h>

int main()
{
	/*
	//①
	printf("%d\n", 10000001);
	printf("%d\n", 10111111);

	//②
	printf("%d\n", 0b00101100 + 0b01010101);
	printf("%d\n", 0b10110000 + 0b00001111);

	//③
	printf("char   1バイト");
	printf("\nint    4バイト");
	printf("\nfloat  4バイト");
	printf("\ndouble 8バイト");

	//④
	//全部同じ
	printf("\nchar*   8バイト");
	printf("\nint*    8バイト");
	printf("\nfloat*  8バイト");
	printf("\ndouble* 8バイト");

	//⑤
	printf("\n2");
	*/
	//⑥ + ⑦
	//endで終われない事案発生
	int i;
	int j;
	char mozi = 0;
	bool endFlag = false;

	while (!endFlag)
	{
		printf("\n終わりたければend\n");
		scanf_s("%c%*c%*c", &mozi, 3);

		if (mozi == 'end')
		{
			endFlag = true;
			break;
		}

		printf("1つめ\n");
		scanf_s("%d",&i);
		printf("2つめ\n");
		scanf_s("%d", &j);

		if (i % 2 == 1)
		{
			printf("%d\n",i + j);
		}

		else if (i % 2 == 0)
		{
			printf("%d\n", i - j);
		}
	}

	//4箇所訂正済
	//⑧
	/*class Point
	{
	public:
		Point() { Clear(); }

		int Clear()
		{
			x = 0;
			y = 0;
			z = 0;
		}
	public:
		int x, y, z;
	};

	{
		Point point;
		Point nextPoint;

		nextPoint.x = 100;
		nextPoint.y = 30;

		while (1)
		{
			if (point.x < nextPoint.x)
			{
				point.x++;
			}
			else if (point.x > nextPoint.x)
			{
				point.x--;
			}

			if (point.y < nextPoint.y)
			{
				point.y++;
			}
			else if (point.y > nextPoint.y)
			{
				point.y--;
			}
			printf("pointX = %d\n", point.x);
			printf("pointY = %d\n", point.y);

			if (point.x == nextPoint.x &&
				point.y == nextPoint.y)
			{
				break;
			}
		}
	}*/
}