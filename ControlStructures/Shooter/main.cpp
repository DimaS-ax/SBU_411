#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Enter	13
#define Escape	27

#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

//#define IF_ELSE

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������, � ���������� ASCII-��� ������� �������.
						//���� ASCII-��� �� ���������� � ���������� 'key' ���������� ������������
		//cout << (int)key << "\t" << key << endl;
		//(int)key - ��� ����� �������������� ���������� 'key' � ��� ������ 'int', ��� ���� ����� ������� �������� ��� ������� �������.

		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter) cout << "�����" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;
	} while (key != Escape);

	//(type)value;	//C-Like notation (C-�������� ����� ������)
	//type(value);	//Functional notation (�������������� ����� ������)    
#endif // IF_ELSE

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w': cout << "������" << endl; break;
		case DownArrow:
		case 'S':
		case 's': cout << "�����" << endl; break;
		case LeftArrow:
		case 'A':
		case 'a': cout << "�����" << endl; break;
		case RightArrow:
		case 'D':
		case 'd': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape:cout << "�����" << endl;
		case -32:break;
		default:	cout << "Error" << endl;
		}
	} while (key != Escape);

}