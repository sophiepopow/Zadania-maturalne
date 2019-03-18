#include<iostream>
using namespace std;
string dluzsza(string a,string b)
{
    if(a.size()>b.size())
        return a;
    if(a.size()<b.size())
        return b;
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='1'&&b[i]=='0') ///a[i] > b[i] tez dziala!!!
                return a;
            if(a[i]=='0'&&b[i]=='1')
                return b;
        }
    }

}
string krotsza(string a,string b)
{
    if(a.size()<b.size())
        return a;
    if(a.size()>b.size())
        return b;
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='1'&&b[i]=='0')
                return b;
            if(a[i]=='0'&&b[i]=='1')
                return a;
        }
    }
}
int main()
{
    int nr_wiersza=1,maxi_wiersz,mini_wiersz;
    string x;
    string maxi,mini;

    cin>>x;
    maxi=x;
    maxi_wiersz=nr_wiersza;
    mini=x;
    mini_wiersz=nr_wiersza;
    while(cin>>x)
    {
        nr_wiersza++;
        maxi=dluzsza(x,maxi);
        if(maxi==x)
        {
            maxi_wiersz=nr_wiersza;
        }
        mini=krotsza(x,mini);
        if(mini==x)
        {
            mini_wiersz=nr_wiersza;
        }
    }

    cout<<maxi_wiersz<<endl;
    cout<<mini_wiersz<<endl;
}
