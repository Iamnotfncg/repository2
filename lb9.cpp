#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

#define N 8


void FillArray(double arr[])
{
	for (int i = 0; i < N; i++)
		arr[i] = (double)rand() / (RAND_MAX + 1) * (100) + (0);
}

void PrintArray(double arr[])
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << setw(10);
	cout << endl;
}

void NewArray(double arr[],double newarr[])
{
	int c = 0;
	for (int i = 0; i < N; i++)
		if (arr[i] > 15.6 && arr[i] < 75) newarr[i] = arr[i];
		else
		{
			newarr[i] = 0;
			c++;
		}
}

int CountZeros(double arr[])
{
	int c = 0;
	for (int i = 0; i < N; i++)
		if (arr[i] == 0) c++;
	return c;
}

int main()
{
	srand(time(NULL));

	double newarr[N];
	double arr[N];

	FillArray(arr);
	PrintArray(arr);
	NewArray(arr, newarr);
	cout << setw(0) << "Number of zeros: " << CountZeros(newarr) << endl;
	PrintArray(newarr);
}
