// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    long long silnia = 1;
    cout << "Wpisz liczbe:";
    cin >> n;
    if (n == 0)
    {
        cout << "1" << endl;
    }

    for (int l= 1; l <= n; l++ ) {
        silnia *= l;
    }
    cout << "! = " << silnia << endl;
}