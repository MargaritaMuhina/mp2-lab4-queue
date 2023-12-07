#include <iostream>
#include"Queue.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int len;
	cout << "Введите длину очереди\n";
	cin >> len;
	try
	{
		TQueue<int> Qu(len);
		for (int i = 0; i < len; i++)
		{
			Qu.Push(i);
			cout << "Добавлено " << i << endl;
		}

		while (!Qu.isEmpty())
		{
			len = Qu.Pop();
			cout << "Извлечено " << len << endl;
		}
	}
	catch (const char* e) {
		cout << e << endl;
	}
	return 0;
}