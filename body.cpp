#include "body.h"

int x2(int a)
{
	return (a * 2);
}

int mod(int a)
{
	if (a < 0) {
		return -a;
	}
	return a;
}

void map(int *arr, unsigned size, int(*fun)(int))
{
	for (unsigned i = 0; i < size; i++) {
		arr[i] = fun(arr[i]);
	}
}

int map(int *arr, unsigned size, int(*fun)(int, int))
{
	int m = fun(arr[0], arr[1]);
	for (unsigned i = 2; i < size; i++) {
		m = fun(m, arr[i]);
	}
	return m;
}

void print(int *arr)
{
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
}


