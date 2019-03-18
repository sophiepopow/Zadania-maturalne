#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
struct punkt
{
    int xx,yy;
};
bool operator<(punkt a,punkt b)
{
    return a.xx<b.xx;
}
int main()
{
    float x,y,pole=0;
    int pol;

    vector<punkt> V;
    punkt p;

    ifstream odczyt;
    ofstream zapis;
    odczyt.open("punkty.txt");
    zapis.open("wynik3.txt");

    do
    {
        odczyt>>x>>y;

        p.xx=x;
        p.yy=y;
        V.push_back(p);

    }
    while(!odczyt.eof());

    for(int i=0; i< V.size(); i++)
    {
        pole+=(V[i].xx*V[i+1].yy)-(V[i+1].xx*V[i].yy);
    }
    pole=pole/2;
    pol=pole;

    zapis<<pol<<endl;

    odczyt.close();
    zapis.close();
}

