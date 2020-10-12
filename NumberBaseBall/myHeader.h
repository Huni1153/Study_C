#pragma once
#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#pragma once

int inputInt_std(char* str, char* type, char* strValue, int intValue);
int inputInt_s(char* str);
int inputInt();
void myFlush();
void output(char* str, int intValue);


void myFlush()
{
	while (getchar() != '\n');
}

int inputInt_std(char* str, char* type, char* strValue, int intValue)
{
	int inputNum = 0;

	printf("%s", str);
	while (1)
	{
		if (scanf_s("%d", &inputNum) == 0)
		{
			printf("���ڸ� �Է��ϼ���!\n");
			myFlush();
			printf("%s", str);
		}
		else if (inputNum < 0)
		{
			printf("����� �Է��ϼ���!\n");
			printf("%s", str);
		}
		else
		{
			return inputNum;
		}
	}
}


int inputInt_s(char* str)
{
	int inputNum = 0;

	printf("%s", str);
	while (1)
	{
		if (scanf_s("%d", &inputNum) == 0)
		{
			printf("���ڸ� �Է��ϼ���!\n");
			myFlush();
			printf("%s", str);
		}
		else if (inputNum < 0)
		{
			printf("����� �Է��ϼ���!\n");
			printf("%s", str);
		}
		else
		{
			return inputNum;
		}
	}
}
int inputInt()
{
	int inputNum = 0;
	while (1)
	{
		if (scanf_s("%d", &inputNum) == 0)
		{
			printf("���ڸ� �Է��ϼ���!\n");
			myFlush();
			return 0;
		}
		else if (inputNum < 0)
		{
			printf("����� �Է��ϼ���!\n");
			return 0;
		}
		else
		{
			return inputNum;
		}
	}
}