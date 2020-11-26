#include <iostream>
using namespace std;

// Calculator

void calculator()
{
	char flag_var;
	int track;
	cout << "Press (1) for Addition" << endl << "Press (2) for Subtraction" << endl << "Press (3) for Multiplication" << endl << "Press (4) for Division" << endl << "Press (5) for Modulus" << endl;
	cin >> track;
	int x, y;
	cout << "Enter your two numbers separated by space" << endl;
	cin >> x >> y;
	if (track == 1)
	{	
		cout << "Result " << x + y;
	}
	else if (track == 2)
	{
		cout << "Result " << x - y;
	}
	else if (track == 3)
	{
		cout << "Result " << x * y;
	}
	else if (track == 4)	
	{
		cout << "Result " << x / float(y);
	}
	else if (track == 5)
	{
		cout << "Result " << x % y;
	}
	cout << endl;
	cout << "Press 'y' to continue" << endl;
	cin >> flag_var;
	if (flag_var == 'y')
	{	
		bool flag = true;
		while (flag != false)
		{
			cout << "Press (1) for Addition" << endl << "Press (2) for Subtraction" << endl << "Press (3) for Multiplication" << endl << "Press (4) for Division" << endl << "Press (5) for Modulus" << endl;
			cin >> track;
			int x, y;
			cout << "Enter your two numbers separated by space" << endl;
			cin >> x >> y;
			if (track == 1)
			{	
				cout << "Result " << x + y;
			}
			else if (track == 2)
			{
				cout << "Result " << x - y;
			}
			else if (track == 3)
			{
				cout << "Result " << x * y;
			}
			else if (track == 4)	
			{
				cout << "Result " << x / float(y);
			}
			else if (track == 5)
			{
				cout << "Result " << x % y;
			}
			cout << endl;
			cout << "Press 'y' to continue" << endl;
			cin >> flag_var;
			if (flag_var != 'y')
			{
				flag = false;
			}
		}
	}
	cout << "Thank you for usin the calculator application" << endl;
	cout << endl;
}						

// Input 10 Integers

void input_10()
{
	int a [10];
	cout << "Enter value " << 0 << endl;
	cin >> a[0];
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < 10; i++)
	{
		
		cout << "Enter value " << i << endl;
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}	
	int b [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int x;
	for (int j = 0; j < 10; j++)
	{	
		x = a[j];
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == x)
			{
				b[j] += 1;
			}
		}
	}
	int max_in_b = 0;
	for (int j = 1; j < 10; j++)
	{
		if (b[j] > b[j - 1])
		{
			max_in_b = j;
		}
	}
	cout << "The maximum is " << max << endl;
	cout << "The minimum is " << min << endl;
	cout << "The number which occurs the most is " << a[max_in_b] << endl;
	cout << endl; 
}

// Sort 10 Integers

void sorted_10(int* a)
{
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10 - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				int x = a[i];
				int y = a[i + 1];
				a[i] = y;
				a[i + 1] = x;
			}
		}
	}
}

// Pascal's Triangle

void pascal(int size)
{
	int a[size][size];
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	for (int j = 2; j < size; j++)
	{
		a[j][0] = 1;
		a[j][j] = 1;
		for (int i = 1; i < j; i++)
		{
			a[j][i] = a[j-1][i-1] + a[j-1][i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << a[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;
} 

// Pointer: Max Value

int* max(int* a, int size)
{
	int* max = NULL;
	cout << "Enter value " << 0 << endl;
	cin >> a[0];
	max = &a[0];
	for (int i = 1; i < size; i++)
	{
		
		cout << "Enter value " << i << endl;
		cin >> a[i];
		if (a[i] > *max)
		{
			max = &a[i];
		}
	}	
	return max;
}

// 5 Integers From Keyboard

void five_ints()
{
	int a [5];
	int* b = &a[0];
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter an integer and press enter" << endl;
		cin >> *(b + i);
	}
	cout << "You entered the following integers:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
}

// Sorting Array

int* sorted(int* a, int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				int x = a[i];
				int y = a[i + 1];
				a[i] = y;
				a[i + 1] = x;
			}
		}
	}
	int* b = &a[0];
	return b;
}

int main()
{
	calculator();

	input_10();

	int a [10] = {3, 1, -1, 2, 5, 6, 3, 4, 0, 10};
	sorted_10(a);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;

	pascal(10);

	int b [7];
	int* m = max(b, 7);
	cout << "The maximum is " << *m << endl;
	cout << endl;
	
	five_ints();
	
	int c [10] = {4, 3, 9, 1, 0, 15, 20, 8, 12, 1};
	int* d = sorted(&c[0], 10);
	for (int i = 0; i < 10; i++)
	{
		cout << *(d + i) << "    ";
	}

	cout << endl;

	return 0;
}	
