#include<iostream>
#include<cstring>
using namespace std;
string encode (string s, int j)
{
    for (int i=0; i<s.length() ;i++)
    {
        if(s[i]!=' ')
        {
            s[i]= s[i]+j;
        }
    }
    return s;
}
int main()
{
    string a;
    int b;
    cout<<"Sample String :";
    getline(cin, a);
    cout<<"Sample Integer :";
    cin>>b;
    cout<<"Converted String : "<<encode(a,b);
    return 0;
}
