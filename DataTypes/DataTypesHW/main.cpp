#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double money;
	cout << "������� �����: "; cin >> money;
	int dollar = money;		//������� �������������� ����� �� 'double' � 'int'
	cout << dollar << " dollars\t";
	int cent = (money - dollar + .00000001) * 100;
	//int cent = money * 100 - dollar * 100;
	cout << cent << " cents\n";
}