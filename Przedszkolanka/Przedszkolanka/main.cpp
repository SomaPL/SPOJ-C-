#include <iostream>

using namespace std;

int NWD(int a, int b)
{
    if(b!=0)
        return NWD(b,a%b);

    return a;
}

int main()
{
    int N,wynik;
    cin>>N;
    while(N--)
    {
        int a,b;
        cin>>a>>b;
        wynik=a*b/NWD(a,b);
        cout<<wynik<<endl;

    }
    return 0;
}
