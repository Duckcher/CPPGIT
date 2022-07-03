#pragma once
#define _CTR_SECURE_NO_WARNINGS
#include <Windows.h>
#include <time.h>
#include <iostream>
#define MAX 10
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[MAX], i, max = 0, maxi;
	for (i = 0; i < MAX; ++i)
	{
		arr[i] = rand() % 100;
	}
	for (i = 0; i < MAX; ++i)
	{
		cout << " " << arr[i] << " ";
	}
	for (i = 0; i < MAX; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxi = i;
		}
	}
	cout << "" << endl;
	cout << "Номер максимального: " << maxi + 1 << endl;
	int count = 0;
	for (i = 0; i < 6; i++)
	{
		count = i;
	}
	swap(arr[maxi], arr[count]);
	for (i = 0; i < MAX; ++i)
	{
		cout << " " << arr[i] << " ";
	}
}