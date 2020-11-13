#include <iostream>
#include <cmath>
using namespace std;

// Area and Circumference

void area_and_circumference(float diameter, float *area, float *circumference)
{
	*area = M_PI * pow((diameter / 2), 2);
	*circumference = M_PI * diameter;
}

// Minimum and Maximum

void min_and_max(float arr [], int arr_size, float *min, float *max)
{
	float minimum = arr[0];
	float maximum = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < minimum)
		{		
		minimum = arr[i];
		}
		if (arr[i] > maximum)
		{
			maximum = arr[i];
		}
	}
	*min = minimum;
	*max = maximum;
}

// Fibonacci

int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

// Multiplication Table

void multiplication_table(int n, int up_to = 10)
{
	for (int i = 1; i <= up_to; i++)
	{
		cout << n << " times " << i << " equals " << n * i << endl;
	}
}

// Truth Table

void truth_table_and_or()
{
	bool val [] = {true, false};
	
	cout << "Truth Table for AND" << endl << endl;
	for (int i = 0; i < sizeof(val) / sizeof(val[0]); i++)
	{
		for (int j = 0; j < sizeof(val) / sizeof(val[0]); j++)
		{
			for (int k = 0; k < sizeof(val) / sizeof(val[0]); k++)
			{
				cout << " | " << val[i] << " | " << val[j] << " | " << val[k] << " => " << (val[i] && val[j] && val[k]) << endl;
			}

		}

	}

	cout << endl;

	cout << "Truth Table for OR" << endl << endl;
	for (int i = 0; i < sizeof(val) / sizeof(val[0]); i++)
	{
		for (int j = 0; j < sizeof(val) / sizeof(val[0]); j++)
		{
			for (int k = 0; k < sizeof(val) / sizeof(val[0]); k++)
			{
				cout << " | " << val[i] << " | " << val[j] << " | " << val[k] << " => " << (val[i] || val[j] || val[k]) << endl;
			}

		}

	}
}

int main()
{
	float area, circumference;
	area_and_circumference(2, &area, &circumference);
	cout << area << endl;
	
	float arr [] = {3, 4, 9, 8, 2};
	float min, max;
	min_and_max(arr, sizeof(arr)/sizeof(arr[0]), &min, &max);
	cout << min << endl << max << endl;

	int n = 7;
	cout << fibonacci(n) << endl;

	int table_n = 10;
	int up_to = 12;
	multiplication_table(table_n, up_to);

	truth_table_and_or();
}
