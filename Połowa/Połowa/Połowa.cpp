#include <iostream>
#include<cstring>
#include <string>

using namespace std;

int main()
{
	int testy;
	cin >> testy;
	cin.ignore();
	while (testy--)
	{
		string tekst;
		getline(cin, tekst);
		string pier_polowa = tekst.substr(0, tekst.length() / 2);
		cout << pier_polowa << endl;

	}
	return 0;
}
