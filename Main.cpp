#include <iostream>

using namespace std;

int AmountOddOrEvent = 0;
const int Limit = 15;


void FindOddNumbers(int Limit, bool IsOdd)
{
	for (int i = IsOdd; i < Limit; i += 2)
	{
		cout << i << " ";
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� 0 ��� ����������� ������ �����, 1 ��� ����������� �������� �����: ";
	cin >> AmountOddOrEvent;

	if (AmountOddOrEvent == 0)
		FindOddNumbers(Limit, false);
	else if (AmountOddOrEvent == 1)
		FindOddNumbers(Limit, true);
	else
		cout << "�� ����� �������� ��������";
}