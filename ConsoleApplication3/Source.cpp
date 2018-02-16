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
		cout << "Введите номер задания: ";
		cin >> n;

		switch (n) {
			//1.	Даны первый член и знаменатель геометрической прогрессии. Написать рекурсивную функцию: 
		//	a.нахождения n - го члена прогрессии
			//	b.нахождения суммы n первых членов прогрессии

		case 1: {
			int k;
			cout << "'введите пункт: ";
			cin >> k;
			switch (k) {

			case 1: {		
				int l, first, step;
				cout << "введите число элементов в геометрической прогрессии: ";
				cin >> l;
				cout << "введите знаменатель геометрической прогрессии: ";
				cin >> step;
				cout << "введите первый элемент геометрической прогрессии: ";
				cin >> first;

				rFunc(l, step, first);

				int result = rFunc(l, step, first);
				
				cout << "result= " << result << endl;
			}break;

			case 2: {
				int l, first, step;
				cout << "введите число элементов в геометрической прогрессии: ";
				cin >> l;
				cout << "введите знаменатель геометрической прогрессии: ";
				cin >> step;
				cout << "введите первый элемент геометрической прогрессии: ";
				cin >> first;

				cout << " начало рекурсии" << endl;
				int s = rFuncSum(l, step, first, 0);

				cout << "sum= " << s << endl;
			}break;

			}
		} break;

			//2.	Написать рекурсивную функцию для вычисления максимального элемента массива из n элементов
		case 2: {
			int m[4];
			massiv(m, 4, 10, 40, possitive);
			print_massiv(m, 4);

			int k= rmax_ch(m, 4);
			cout << "максимального элемента массива: " << k << endl;

		} break;

			//3.	Написать рекурсивную функцию для вычисления индекса максимального элемента массива из n элементов
		case 3: {
		} break;

			//4.	Дан массив целых чисел A. Найти суммы положительных и отрицательных элементов массива, используя функцию определения суммы
		case 4: {
			int m[10],s=0,s1=0;
			massiv(m, 10, 10, 40, negative);
			print_massiv(m, 10);

			fSum(m, 10, s, s1);

			cout << "сумма положительных элементов массива: " << s <<endl;
			cout << "сумма отрицательных элементов массива: " << s1 << endl;

		} break;

			//5.	Даны два натуральных числа. Найти наименьшее общее кратное этих чисел, используя функцию реализующую алгоритм Евклида.
		case 5: {
			int a, b;
			cout << "Введите число a: ";
			cin >>a;
			cout << "Введите число b: ";
			cin >> b;
			cout << "Наибольший общий делитель: " << Evklid(a, b) << endl;
			cout << "наименьшее общее кратное: " << LCM(a,b,Evklid(a,b)) << endl;

		} break;
		}
	} while (n > 0);
}
