#include<stdio.h>

int main()
{
	/*
	//�@
	printf("%d\n", 10000001);
	printf("%d\n", 10111111);

	//�A
	printf("%d\n", 0b00101100 + 0b01010101);
	printf("%d\n", 0b10110000 + 0b00001111);

	//�B
	printf("char   1�o�C�g");
	printf("\nint    4�o�C�g");
	printf("\nfloat  4�o�C�g");
	printf("\ndouble 8�o�C�g");

	//�C
	//�S������
	printf("\nchar*   8�o�C�g");
	printf("\nint*    8�o�C�g");
	printf("\nfloat*  8�o�C�g");
	printf("\ndouble* 8�o�C�g");

	//�D
	printf("\n2");
	*/
	//�E + �F
	//end�ŏI���Ȃ����Ĕ���
	int i;
	int j;
	char mozi = 0;
	bool endFlag = false;

	while (!endFlag)
	{
		printf("\n�I��肽�����end\n");
		scanf_s("%c%*c%*c", &mozi, 3);

		if (mozi == 'end')
		{
			endFlag = true;
			break;
		}

		printf("1��\n");
		scanf_s("%d",&i);
		printf("2��\n");
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

	//4�ӏ�������
	//�G
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