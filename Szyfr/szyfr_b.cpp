#include<iostream>
#include<fstream>
using namespace std;
string de_szyfrowanie(string szyfr,string klucz)
{
    string kod="";

    int dlugosc_klucza=klucz.size();
    int x=0;
    while(szyfr.size()>klucz.size())
    {
        klucz+=klucz[x];
        x++;
        if(x==dlugosc_klucza) x=0;
    }
    for(int i=0;i<szyfr.size();i++)
    {
        int w = int(szyfr[i])-(int(klucz[i])-64);
        if(w<65) w=w+26;
        kod+=char(w);
    }
    return kod;
}
int main()
{
    ifstream sz("sz.txt");
    ifstream klucz2("klucze2.txt");
    ofstream wynik("wynik4b.txt");


    while(!klucz2.eof())
    {
        string szyfr,klucz;
        sz>>szyfr;
        klucz2>>klucz;
        wynik<<de_szyfrowanie(szyfr,klucz)<<endl;
    }
}
