#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    string s1, s2, output ;
    ll len ;

    cin >> s1 ;
    cin >> s2 ;

    len = s1.size();

    for(int i=0;i<len;i++)
    {
        if(s1[i] != s2[i])
            output.push_back('1') ;
        else
            output.push_back('0') ;

    }

    cout << output ;

    return 0 ;
}