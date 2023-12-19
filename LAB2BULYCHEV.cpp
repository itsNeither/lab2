#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russia");
	int n = 0;
	while (n <= 3 || n % 2 == 0) {
		cout << "Введите n(n > 3 и n - нечетное): ";
		cin >> n;
	}
	for (int i = 1; i <= n; i += 2) {
		for (int j = 0; j < (n - i) / 2; j++) cout << " ";
		for (int j = 0; j < i; j++) cout << "*";
		cout << endl;
	}
	return 0;
}

