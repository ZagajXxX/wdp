// ConsoleApplication9.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

string reversedText(string a){
	string reversedresult = a;
	for (int i = 0; i < a.length(); i++)
	{
		reversedresult[i] = a[a.length() - 1 - i];
	}
	return reversedresult;
}

int main()
{
	string napis;
	cout << "enter some string" << endl;
	cin >> napis;
	cout << reversedText(napis);
}


