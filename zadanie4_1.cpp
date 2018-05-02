#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    float x,y;
    int p=0,d=0,t=0,c=0;
    ifstream odczyt;
    ofstream zapis;
    odczyt.open("punkty.txt");
    zapis.open("wynik1.txt");

    do
    {
        odczyt>>x>>y;
        if(x>0&&y>0)
            p++;
        else if(x<0&&y>0)
            d++;
        else if(x<0&&y<0)
            t++;
        else
            c++;
    }
    while(!odczyt.eof());

    zapis<<p<<" "<<d<<" "<<t<<" "<<c<<endl;

    odczyt.close();
    zapis.close();
}
