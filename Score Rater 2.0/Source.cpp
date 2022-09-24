#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int score;
	cout << "Введите свой счет: ";
	cin >> score;
	if (score >= 1000)
	{
		cout << "Вы набрали 1000 или больше очков. Впечатляет!\n";
	}
	else
	{
		cout << "Вы набрали меньше 1000 баллов.\n";
	}
	return 0;
}