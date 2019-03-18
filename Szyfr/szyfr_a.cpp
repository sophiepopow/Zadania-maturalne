#include<iostream>
#include<fstream>
using namespace std;
string szyfrowanie(string tekst,string klucz)
{
    string kod="";
    while(klucz.size()<tekst.size())
        klucz+=klucz;

    for(int i=0;i<tekst.size();i++)
    {
        int w=tekst[i]+(klucz[i]-'A');
        if(w>90) w=w-26;
        kod+=char(w);
    }
    return kod;
}
int main()
{
    ifstream tj("tj.txt");
    ifstream klucz1("klucze1.txt");
    ofstream wynik("wynik4a.txt");


    while(!klucz1.eof())
    {
        string tekst_jawny,klucz;
        tj>>tekst_jawny;
        klucz1>>klucz;
        wynik<<szyfrowanie(tekst_jawny,klucz)<<endl;
    }
}
