#include<iostream>
#include<sstream>
using namespace std;
bool spelnia(string x)
{
    for(int i=0;i<x.size()-1;i++)
        {
            if(x[i]>x[i+1])
                return false;
        }
        return true;
}
int main()
{
    stringstream ss;
    string x;
    int liczba, int_mini=20000, int_maxi=0;
    int ile=0;
    string mini,maxi;

    while(cin>>x)
    {
        if(spelnia(x)==true)
        {
            ile++;
            ss.clear();
            ss<<x;
            ss>>liczba;
            if(liczba<int_mini)
                int_mini=liczba;
            if(liczba>int_maxi)
                int_maxi=liczba;
        }
    }
    cout<<ile<<endl;
    cout<<int_mini<<endl;
    cout<<int_maxi<<endl;
}
