#include"Calc.h"
#include"pch.h"
#include<iostream>
using namespace std;


//  fun implementation
int sum(int a, int b)
{
	int s;
	s = a + b;
	return s;
}
int sub(int a, int b)
{
	int s;
	s = a - b;
	return s;
}
int multi(int a, int b)
{
	int s;
	s = a * b;
	return s;
}
int division(int a, int b)
{
	int s;
	s = a / b;
	return s;
}
int pow(int a)
{
	int s;
	s = a * a;
	return s;
}