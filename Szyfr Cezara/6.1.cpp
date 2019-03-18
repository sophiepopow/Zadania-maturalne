#include<iostream>
using namespace std;
string szyfrowanie (string x)
{
    string szyfr="";
    int k = 107,liczba;


    for(int i=0; i<x.size(); i++)
        {
            liczba = (x[i]-'A');
            szyfr+=(((liczba+k)%26)+'A');
        }
    return szyfr;
}
/*
bin2dec
"10101"
'0'-'0' (48-48) = 0
*/
int main()
{
    string x;
    while (cin>>x)
    {
        cout<<szyfrowanie(x)<<endl;
    }
    return 0;
}
