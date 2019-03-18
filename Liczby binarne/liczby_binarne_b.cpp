#include<iostream>
using namespace std;
int main()
{
    string x;
    int podz_dwa = 0, podz_osiem = 0;
    while(cin>>x)
    {
        if(x[x.size()-1]=='0')
        {
            podz_dwa++;
            if(x[x.size()-2]=='0'&&(x[x.size()-3]=='0'))
                podz_osiem++;
        }


    }
    cout<<"Podzielne przez 2: "<<podz_dwa<<endl;
    cout<<"Podzielne przez 8: "<<podz_osiem<<endl;

}

