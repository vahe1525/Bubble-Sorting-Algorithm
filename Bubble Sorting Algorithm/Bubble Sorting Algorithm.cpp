
#include <iostream>

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	const int n = 5;
	int arr[n] = { 5, 3, 8, 4, 2 };

	BubbleSort(arr, n);

	std::cout << "Sorted array: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}