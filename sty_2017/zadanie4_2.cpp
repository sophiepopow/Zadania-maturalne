#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
struct punkt
{
    int xx,yy,rr;
};
bool operator<(punkt a,punkt b)
{
    return a.xx<b.xx;
}
int main()
{
    int x,y,r;
    vector<punkt> V;
    punkt p;
    int ilosc=0;

    ifstream odczyt;
    ofstream zapis;
    odczyt.open("okregi.txt");
    zapis.open("wynik2.txt");

    do
    {
        odczyt>>x>>y>>r;
        if(abs(y)==r)
        {
            p.xx=x;
            p.yy=y;
            p.rr=r;
            V.push_back(p);
            ilosc++;
        }
    }
    while(!odczyt.eof());

    sort(V.begin(),V.end());

    for(int i=0; i< V.size(); i++)
    {
        zapis<<V[i].xx<<" "<<V[i].yy<<" "<<V[i].rr<<endl;
    }
    zapis<<ilosc<<endl;

    odczyt.close();
    zapis.close();
}

