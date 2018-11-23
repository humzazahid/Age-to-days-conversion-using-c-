#include<iostream>
using namespace std;
#include<windows.h>
#include<cmath>
void main()
{
	int a, b, c, x, y, z, d, e = 0;
	int count = 0, mont, day, days, years;
	Sleep(1000);
	cout << "Enter date of birth";
	Sleep(900);
	cout << "\ni-e DD/MM/YYYY\n";
	cin >> x >> y >> z;
	cout << "Current date ";
	Sleep(900);
	cout << "\ni-e DD/MM/YYYY\n";
	cin >> a >> b >> c;
	years = (c - z);


	for (int i = 1; i <= years; i++)
	{
		if (i % 4 == 0)
			count++;
	}
	days = (years * 365) + count;
	cout << days << endl;
	if (y == 1)
	{
		y = 0;
		y += 31;
		y += 28;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 2)
	{
		y = 0;
		y += 28;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 3)
	{
		y = 0;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 4)
	{
		y = 0;
		y += 30;
		y += 31;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 5)
	{
		y = 0;
		y += 31;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 6)
	{
		y = 0;
		y += 30;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 7)
	{
		y = 0;
		y += 31;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 8)
	{
		y = 0;
		y += 31;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 9)
	{
		y = 0;
		y += 30;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 10)
	{
		y = 0;
		y += 31;
		y += 30;
		y += 31;

	}
	if (y == 11)
	{
		y = 0;
		y += 30;
		y += 31;

	}
	if (y == 12)
	{
		y = 0;
		y += 31;

	}
	d = y - x;
	cout << d << endl;

	if (b == 12)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		e = b - (31 - a);
	}
	if (b == 11)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		e = b - (30 - a);
	}
	if (b == 10)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		b += 31;
		b += 30;
		b += 31;
		e = b - (31 - a);
	}
	if (b == 9)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		b += 31;
		b += 30;
		e = b - (30 - a);
	}
	if (b == 8)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		b += 31;
		e = b - (31 - a);
	}
	if (b == 7)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		b += 31;
		e = b - (31 - a);
	}
	if (b == 6)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		b += 30;
		e = b - (30 - a);
	}
	if (b == 5)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		b += 31;
		e = b - (31 - a);
	}
	if (b == 4)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		b += 30;
		e = b - (30 - a);
	}
	if (b == 3)
	{
		b = 0;
		b += 31;
		b += 28;
		b += 31;
		e = b - (31 - a);

	}
	if (b == 2)
	{
		b = 0;
		b += 31;
		b += 28;
		e = b - (28 - a);
	}
	if (b == 1)
	{
		b = 0;
		e = a;
	}

	cout << e << endl;

	cout << "total number of days u lived so far  :" << e + b + d + days << endl;



	system("pause");
}