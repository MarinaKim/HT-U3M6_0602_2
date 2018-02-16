#pragma once
enum type_number { possitive, negative, all };

int rFunc(int count, int z, int fn);
int rFuncSum(int count, int z, int fn, int sum);
int sluch_number(type_number tn, int start, int end);
void massiv(int *a, int r, int start, int end, type_number tn);
void print_massiv(int *a, int r);
void fSum(int *a, int r, int &s, int &s1);
int Evklid(int a, int b);
int LCM(int a, int b, int gcd);
int rmax_ch(int *a, int r);



