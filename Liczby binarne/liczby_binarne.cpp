#include<iostream>
using namespace std;
bool wiecej_z_niz_j(string a)
{
    int zera=0,jedynki=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0')
        {
            zera++;
        }
        else
        {
            jedynki++;
        }
    }
    if(zera>jedynki)
        return true;
    else
        return false;
}
int main()
{
    string x;
    int ilosc = 0;
    while(cin>>x)
    {
        if(wiecej_z_niz_j(x)==true)
            ilosc++;
    }
    cout<<ilosc<<endl;
}
