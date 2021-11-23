#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int pusty=0;
    int liczba;
    while(cin>>liczba)
    {
        pusty+=liczba;
        cout<<pusty<<endl;
    }
    return 0;
}
