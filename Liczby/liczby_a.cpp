#include<iostream>
using namespace std;

int main()
{
    string x;
    int ile=0;
    while(cin>>x)
    {
        if(x[0] == x[x.size()-1])
            ile++;
    }
    cout<<ile<<endl;
}
