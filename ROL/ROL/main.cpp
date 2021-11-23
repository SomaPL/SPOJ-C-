#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int ile_liczb;
        cin>>ile_liczb;
        int tab[ile_liczb];
        for(int i=0;i<ile_liczb;i++)
        {
            cin>>tab[i];
        }
        for(int i=1;i<ile_liczb;i++)
        {
            cout<<tab[i]<<" ";
        }
        cout<<tab[0];
    }
    return 0;
}
