#include <iostream>
using namespace std;

// Ex 1

class Rect
{
	private:
		float length;
		float width;

	public:
		Rect(float l, float w)
		{
			length = l;
			width = w;
		}
		
		float area()
		{
			return length * width;
		}
};

// Ex 2

class Add_Two
{
	private:
		int first;
		int second;
	public:
		Add_Two(int m, int n)
		{
			first = m;
			second = n;
		}
		int add_two()
		{
			return first + second;
		}
};

// Ex 3

class Complex
{
	private:
		float real;
		float imag;
	public:
		Complex(float a, float b)
		{
			real = a;
			imag = b;
		}
		Complex operator +(Complex& z)
		{
			Complex result(real + z.real, imag + z.imag);
			return result;
		}
		void display()
		{
			cout << "The complex number is " << real << " + " << imag << "i" << endl;
		}
};
		

int main()
{
	float x = 5.0;
	float y = 6.5;
	Rect z(x, y);
	cout << "Area of rectangle with length " << x << " and width " << y << " is " << z.area() << endl;

	int m, n;
	cout << "Enter first number" << endl;
	cin >> m;
	cout << "Enter second number" << endl;
	cin >> n;
	Add_Two o(m, n);
	cout << "The sum of " << m << " and " << n << " is " << o.add_two() << endl;
	
	float r_1, i_1;
	cout << "Enter real part of first number" << endl;
	cin >> r_1;
	cout << "Enter imaginary part of first number" << endl;
	cin >> i_1;
	float r_2, i_2;	
	cout << "Enter real part of second number" << endl;
	cin >> r_2;
	cout << "Enter imaginary part of second number" << endl;
	cin >> i_2;
	Complex z_1(r_1, i_1);
	Complex z_2(r_2, i_2);
	(z_1 + z_2).display();
}

