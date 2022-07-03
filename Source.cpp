#pragma once
#define _CTR_SECURE_NO_WARNINGS
#include <Windows.h>
#include <time.h>
#include <iostream>
using namespace std;
int inputInt(const char query[])
{
	int i;
	cout << query;
	while ((cin >> i).fail() || i <= 0)
	{
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Error: " << endl;
	}
	return i;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int size = 0;
	int* arr, i, max = 0, maxi;
	while (size < 6)
	{
		size = inputInt("Input size: ");
		if (size < 6)
		{
			cout << "Size should be >= 6" << endl;
		}
	}
	arr = (int*)malloc(size * sizeof(int*));
		for (i = 0; i < size; i++)
		{
			cout << "Input element " << i << ": ";
			arr[i] = inputInt("");
		}
		for (i = 0; i < size; ++i)
		{
			cout << " " << arr[i] << " ";
		}
		for (i = 0; i < size; ++i)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				maxi = i;
			}
		}
		cout << "" << endl;
		cout << "Number of maximum: " << maxi << endl;
		for (i = 0; i <= 6; i++)
		{

		}
		swap(arr[maxi], arr[i]);
		for (i = 0; i < size; ++i)
		{
			cout << " " << arr[i] << " ";
		}
}