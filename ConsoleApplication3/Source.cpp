#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include<math.h>

#include "Header.h"
using namespace std;


void main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	do
	{
		cout << "������� ����� �������: ";
		cin >> n;

		switch (n) {
			//1.	���� ������ ���� � ����������� �������������� ����������. �������� ����������� �������: 
		//	a.���������� n - �� ����� ����������
			//	b.���������� ����� n ������ ������ ����������

		case 1: {
			int k;
			cout << "'������� �����: ";
			cin >> k;
			switch (k) {

			case 1: {		
				int l, first, step;
				cout << "������� ����� ��������� � �������������� ����������: ";
				cin >> l;
				cout << "������� ����������� �������������� ����������: ";
				cin >> step;
				cout << "������� ������ ������� �������������� ����������: ";
				cin >> first;

				rFunc(l, step, first);

				int result = rFunc(l, step, first);
				
				cout << "result= " << result << endl;
			}break;

			case 2: {
				int l, first, step;
				cout << "������� ����� ��������� � �������������� ����������: ";
				cin >> l;
				cout << "������� ����������� �������������� ����������: ";
				cin >> step;
				cout << "������� ������ ������� �������������� ����������: ";
				cin >> first;

				cout << " ������ ��������" << endl;
				int s = rFuncSum(l, step, first, 0);

				cout << "sum= " << s << endl;
			}break;

			}
		} break;

			//2.	�������� ����������� ������� ��� ���������� ������������� �������� ������� �� n ���������
		case 2: {
			int m[4];
			massiv(m, 4, 10, 40, possitive);
			print_massiv(m, 4);

			int k= rmax_ch(m, 4);
			cout << "������������� �������� �������: " << k << endl;

		} break;

			//3.	�������� ����������� ������� ��� ���������� ������� ������������� �������� ������� �� n ���������
		case 3: {
		} break;

			//4.	��� ������ ����� ����� A. ����� ����� ������������� � ������������� ��������� �������, ��������� ������� ����������� �����
		case 4: {
			int m[10],s=0,s1=0;
			massiv(m, 10, 10, 40, negative);
			print_massiv(m, 10);

			fSum(m, 10, s, s1);

			cout << "����� ������������� ��������� �������: " << s <<endl;
			cout << "����� ������������� ��������� �������: " << s1 << endl;

		} break;

			//5.	���� ��� ����������� �����. ����� ���������� ����� ������� ���� �����, ��������� ������� ����������� �������� �������.
		case 5: {
			int a, b;
			cout << "������� ����� a: ";
			cin >>a;
			cout << "������� ����� b: ";
			cin >> b;
			cout << "���������� ����� ��������: " << Evklid(a, b) << endl;
			cout << "���������� ����� �������: " << LCM(a,b,Evklid(a,b)) << endl;

		} break;
		}
	} while (n > 0);
}
