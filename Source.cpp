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
		cout << "Ошибка, повторите ввод: " << endl;
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
		size = inputInt("Введите размерность: ");
		if (size < 6)
		{
			cout << "Размерность должна быть больше либо равно 6" << endl;
		}
	}
	arr = (int*)malloc(size * sizeof(int*));
		for (i = 0; i < size; i++)
		{
			cout << "Введите элемент массива " << i << ": ";
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
		cout << "Номер максимального: " << maxi << endl;
		for (i = 0; i <= 6; i++)
		{

		}
		swap(arr[maxi], arr[i]);
		for (i = 0; i < size; ++i)
		{
			cout << " " << arr[i] << " ";
		}
}