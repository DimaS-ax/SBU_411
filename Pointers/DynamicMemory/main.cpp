#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int& n, const int value);
int* push_front(int arr[], int& n, const int value);
int* insert(int arr[], int& n, const int value, int index);

int* pop_back(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	/*
	----------------------------------
	+, -, ++, --;
	----------------------------------
	*/

	int value;
	cout << "������� ����������� ��������: "; cin >> value;

	arr = push_back(arr, n, value);

	//7) �������� ���������, ��������� ���������:
	Print(arr, n);


	cout << "������� ����������� ��������: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "������� ������ ������������ ��������: "; cin >> index;
	cout << "������� �������� ������������ ��������: "; cin >> value;
	arr = insert(arr, n, value, index);
	Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_back(arr, n), n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);
	Print(arr, n);

	delete[] arr;
	//Memory leak
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//Index operator, Subscript operator;
	}
}
void Print(int arr[], const int n)
{
	cout << arr << ":\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* push_back(int arr[], int& n, const int value)
{

	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1];

	//2) �������� ��� ���������� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) ������� �������� ������:
	delete[] arr;

	//4) ��������� ����� � ��������� 'arr' ������� ������ �������:
	arr = buffer;

	//5) ������ ����� ����� ����� � ����� ������� ���������� �������, 
	//	 � ������� ����� ��������� ����������� ��������:
	arr[n] = value;

	//6) ����� ���� ��� � ������ ��������� �������, 
	//	 ���������� ��� ��������� ������������� �� 1:
	n++;

	return arr;
}

int* push_front(int arr[], int& n, const int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}
int* insert(int arr[], int& n, const int value, int index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < index; i++)
		buffer[i] = arr[i];
	for (int i = index; i < n; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[index] = value;
	n++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}