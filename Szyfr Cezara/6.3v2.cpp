#include<iostream>

using namespace std;

string odszyfrowanie (string szyfr, int k)
{
    string tekst_jawny="";
    int liczba;
    for(int i=0; i<szyfr.size(); i++)
    {
        //      cout << ((szyfr[i]-'A' - k) % 26) + 'A' << endl;
        if ( ((szyfr[i]-'A' - k) % 26) < 0 )
            tekst_jawny+= ((szyfr[i]-'A' - k) % 26) + 'A' + 26;
        else
            tekst_jawny+= ((szyfr[i]-'A' - k) % 26) + 'A';
    }

    return tekst_jawny;
}

/*
bin2dec
"10101"
'0'-'0' (48-48) = 0
*/

int main()
{
    ///cout << mod(-1717 , 26);

    string x,y;

    while (cin>>x)
    {
        cin>>y;
        int k =(y[0])-(x[0]);
        if(x!=odszyfrowanie(y,k))
            cout<<x<<endl;
    }
    return 0;
}


