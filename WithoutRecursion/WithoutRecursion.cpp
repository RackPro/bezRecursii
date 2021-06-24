#include <iostream>
using namespace std;

unsigned long int fib(unsigned long int n)
{
	if (n == 1 || n == 2) return 1;
	if (n == 0) return 0;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	cout << "Введите a " << endl;
	cin >> a;
	cout << fib(a) << " " << " - Ваше число";
	cout << endl;
	system("pause");
	return 0;
}
