#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int score;
	cout << "������� ���� ����: ";
	cin >> score;
	if (score >= 1000)
	{
		cout << "�� ������� 1000 ��� ������ �����. ����������!\n";
	}
	else
	{
		cout << "�� ������� ������ 1000 ������.\n";
	}
	return 0;
}