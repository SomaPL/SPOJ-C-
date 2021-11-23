#include <iostream>

using namespace std;

int test;
int Suma=0;

int main()
{
    int MozenieLiczby[11];
    MozenieLiczby[0] = 1;
    MozenieLiczby[1] = 3;
    MozenieLiczby[2] = 7;
    MozenieLiczby[3] = 9;
    MozenieLiczby[4] = 1;
    MozenieLiczby[5] = 3;
    MozenieLiczby[6] = 7;
    MozenieLiczby[7] = 9;
    MozenieLiczby[8] = 1;
    MozenieLiczby[9] = 3;
    MozenieLiczby[10]= 1;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
    char PodanyPesel[10];
    scanf("%s",PodanyPesel);
    cout<<PodanyPesel<<endl;
    for(int i=0;i<=10;i++)
    {
        cout<<PodanyPesel[i]-48;
    }
    cout<<Suma;
    }
    return 0;
}
