
#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 0; i <= 50; i = i + 2) {
		cout << i << ",";
	}
	cout << i << ",";
	while (i <= 98) {
		i = i + 2;
		cout << i << ",";
	}

}