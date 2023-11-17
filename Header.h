#pragma once
#include <iostream>
#include<fstream>
using namespace std;
void sortAndPrint(int arr[]) {

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;

	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	for (size_t i = 0; i < 10 - 1; i++)
	{
		for (size_t j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}

	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i];
	}
}
	


