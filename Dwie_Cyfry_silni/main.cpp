#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int silnia=1;
        int ile;
        int a=0;
        int b=0;
        cin>>ile;
        if(ile<10)
        {
            for(int i=1;i<=ile;i++)
            {
                silnia=silnia*i;
            }
            a=silnia%10;
            b=(silnia%100)/10;
            cout<<b<<" "<<a<<endl;
        }
        else
        {
            cout<<b<<" "<<a<<endl;
        }


    }
    return 0;
}
