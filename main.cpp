#include <iostream>

using namespace std;

int main()
{
    int i=0, d=0;
    string b;
    cout<<"Podaj liczbe binarna: "; cin>>b;
    while (i<b.size())
    {
        d=d*2;
        if(b[i]=='1')d++;
        i++;
    }
    cout <<"liczba dziesietna: " << d;
    return 0;
}
