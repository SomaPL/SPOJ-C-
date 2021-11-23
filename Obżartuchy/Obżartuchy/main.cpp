#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    while(testy--)
    {
    	int ile_ciastek,ile_osob,czas;
        double suma=0;
        double ciacha;
        double doba=86400;
        cin>>ile_osob>>ile_ciastek;
        for(int i=0;i<ile_osob;i++)
        {
            cin>>czas;
            suma+=floor((doba/czas));
        }
        cout<<ceil(suma/ile_ciastek)<<endl;
    }
    return 0;
}
