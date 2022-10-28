// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Wpisz cenę produktu:" << endl;
	cin >> a;
	cout << "Wpisz cenę sprzedaży:" << endl;
	cin >> b;
	int c = b - a;
		if (c > 0) {
			cout << "Zysk:" << c;
		}
		if (c < 0) {
			cout << "Strata:" << -c;
		}
		if (c == 0) {
            cout << "Brak zysku i straty.";
		}
}