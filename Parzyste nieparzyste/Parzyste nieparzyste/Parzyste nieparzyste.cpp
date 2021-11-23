#include <iostream>
#include <conio.h>
#include<string>

using namespace std;

int main()
{
    int test;
    cin >> test;
	while (test--)
	{
		char liczby[100];
		int ile;
		cin >> ile >> liczby;
		int liczba = (int)liczby - 48;
		for (int i = 1; i <= ile;i++)
		{
			cout << liczba[i] << " ";
		}
	
	}
}