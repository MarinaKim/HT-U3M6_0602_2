#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include<math.h>

using namespace std;
enum type_number { possitive, negative, all };

int rFunc(int count, int z, int fn)
{
	
	if (count <= 1)
		return fn;

	fn += z;//fn=fn+3
	count--;
	cout << count << ".fn= " << fn << endl;

	fn = rFunc(count, z, fn);
	return fn;
}

int rFuncSum(int count, int z, int fn, int sum)
{
	sum += fn;
	if (count <= 1)
		return sum;

	count--;
	fn += z;
	cout << count << ".fn= " << fn << endl;


	sum = rFuncSum(count, z, fn, sum);

	return sum;
}

int sluch_number(type_number tn, int start, int end)
{
	

	switch (tn) {
	case possitive:
		return (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
	}
}

void massiv(int *a, int r, int start, int end, type_number tn)
{
	for (int i = 0; i < r; i++)
	{
		a[i] = sluch_number(tn, start, end);
	}

}

void print_massiv(int *a, int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void fSum(int *a, int r, int &s, int &s1)
{
	for (int i = 0; i < r; i++)
	{
		if (a[i] > 0)
			s += a[i];
		else
			s1 += a[i];
	}
}

int Evklid(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a%b;
			Evklid(a, b);
		}
		else
		{
			b = b%a;
			Evklid(a, b);
		}
	}
	return a+b;
}

int LCM(int a, int b, int gcd)
{
	return a*b / gcd;
}

int rmax_ch(int *a, int r)
{
	int i=0,max;
	max = a[0];
	
	while (i != r)
	{
		
		if (a[i] > max)
			max = a[i];
		i++;
		rmax_ch(a, r);
	}
	return max;
}