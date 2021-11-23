#include <iostream>

using namespace std;

bool czy_Piewrsza(int LP)
{
    if(LP<2)
        return false;

    for(int i=2;i<LP;i++)
        if(LP%i==0)
            return false;
    return true;
}

int main()
{
    int LP;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>LP;
        if(czy_Piewrsza(LP))
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }

    return 0;
}
