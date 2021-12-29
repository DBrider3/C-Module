#include "iter.hpp"
#include <iostream>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	//char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	//float arr[5] = {0.1f, 0.2f, 0.3f, 0.4f, 0.5f};
	//double arr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	//std::string arr[5] = {"aa", "bbb", "Ccc", "ddd", "eee"}
	iter(arr,  sizeof(arr) / sizeof(arr[0]), printProve);
	iter(arr,  sizeof(arr) / sizeof(arr[0]), plusOne<int>);
}
