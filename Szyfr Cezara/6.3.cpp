#include<iostream>

using namespace std;

bool prawidlowe (string slowo, string szyfr)
{
    int k;
    k =((slowo[0]-'A')-(szyfr[0]-'A')%26);

    if(k<0)
        k+=26;
       for(int i=1; i<szyfr.size(); i++)
       {
           if(((slowo[i]-'A')-(szyfr[i]-'A')%26)<0)
           {
               if(((slowo[i]-'A')-(szyfr[i]-'A')%26+26)!=k)
                return false;
           }

           else
            if(((slowo[i]-'A')-(szyfr[i]-'A')%26)!=k)
            return false;
       }
    return true;
}

/*
bin2dec
"10101"
'0'-'0' (48-48) = 0
*/
int main()
{

    string x,y;
    while (cin>>x)
    {
        cin>>y;
        if(prawidlowe(x,y)==false)
        {
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}


