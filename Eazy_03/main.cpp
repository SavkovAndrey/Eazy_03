#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int x;
	int a, b;
	cout << "������� ����� �� 10 �� 99:  ";
	cin >> x;

	b = x % 10;

	a = (x - b) / 10;

	if (a > b)
	{
		cout << a << " - ������� �����" << endl;
		cout << b << " - ������� �����" << endl;
	}
	else if (b > a)
	{
		cout << b << " - ������� �����" << endl;
		cout << a << " - ������� �����" << endl;
	}
	else
	{
		cout << "����� ����������  " << a << "  " << b << endl;
	}

	system("pause");

	return 0;
}
