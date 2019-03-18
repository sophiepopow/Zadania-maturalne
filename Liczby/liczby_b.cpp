#include<iostream>
#include<sstream>
#include <math.h>
using namespace std;
int hextodec(string a)
{
    int suma=0, wykladnik=0;
    for(int i=a.size()-1;i>=0;i--)
    {
      suma+=int(a[i]-'0')*pow(8,wykladnik);
      wykladnik++;
    }
    return suma;
}
int main()
{
    string a,x;
    int liczba,ile=0;
    stringstream ss;

    while(cin>>a)
    {
        liczba=hextodec(a);
        ss.clear();
        ss<<liczba;
        ss>>x;
        if(x[0] == x[x.size()-1])
            ile++;
    }
    cout<<ile<<endl;
}
