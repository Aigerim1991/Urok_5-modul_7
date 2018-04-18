#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include<locale.h>
#include <time.h>

using namespace std;
int p;
#define len 10
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &p);
		cin.get();
		switch (p)
		{
		case 1:
		{
			
			int dates[len];
			int *pti;
			double bil[len];
			double *ptf;
			pti = dates;
			ptf = bil;
			printf("%23s %10s\n", "int", "double");
			for (int i = 0; i < len; i++)
			{
				printf("указатели+%d: 0x%16px 0x%16px\n", i, pti + i, ptf + i);
			}
	

		}
		break;

		case 2:
		{
			int a;
			printf("Введите число: ");
			scanf("%d", &a);
			printf("Шестнадцатеричная форма записи числа: %#x", a);
			getch(); 
		}
		break;
		case 3:
		{
					
			struct Date
			{
				int m;
				int h;
				int s;

			};
			Date read;
			read.h = 1 + rand() % 23;
			read.m = 1 + rand() % 59;
			read.s = 1 + rand() % 180;
			if ((read.h< 24) && (read.m < 60) && (read.s < 3600))
			{
				printf(" %2s %2s %2s\n", "Час", "Минута", "Секунда");
				printf("Время  [%d.  %d.  %d]\n", read.h, read.m, read.s);
			}

			else return;
		}
		break;
		case 4:
		{
			int *mas;
			mas= (int*)malloc(sizeof(int) * len);
			for (int i = 0; i < len; i++)
			{
				mas[i] = 1 + rand() % 89;
				if ((mas[i] > 18) && (mas[i] < 30))
				{
					printf("Возраст от 18 до 30: %d\n", mas[i]);
				}

			}
		}
		break;

		default:
			break;
		}
	} while (p > 0);















}