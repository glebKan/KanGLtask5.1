#include "pr53.h"

int main()
{
	int str, stl;
	srand(time(0));
	cin >> str >> stl;
	int** arr = new int* [str];
	for (int i = 0; i < str; i++) {
		arr[i] = new int[stl];
	}
	full(arr, str, stl);
	print(arr, str, stl);

	for (int i = 0; i < str; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}