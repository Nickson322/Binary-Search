// testings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

const int n = 16;
int a[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 12, 13, 14, 15, 16 };
int binary_search(int b)
{
	int left = -1, right = n - 1, middle;
	while (right - left > 1)
	{
		middle = (right + left) / 2;
		if (a[middle] >= b)
			right = middle;
		else
			left = middle;
	}
	return right;
}
int main()
{
	int b;
	cin >> b;
	cout << binary_search(b);
	return 0;
}

