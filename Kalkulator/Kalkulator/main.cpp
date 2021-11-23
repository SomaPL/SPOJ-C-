#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b;
    int suma=0;
    char znak;
    while(!(cin>>znak).eof())
    {
        cin>>a>>b;
        switch(znak)
        {
            case '+':
                suma=a+b;
                cout<<suma<<endl;
                break;
            case '-':
                suma=a-b;
                cout<<suma<<endl;
                break;
            case '*':
                suma=a*b;
                cout<<suma<<endl;
                break;
            case '/':
                suma=a/b;
                cout<<suma<<endl;
                break;
            case '%':
                suma=a%b;
                cout<<suma<<endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
