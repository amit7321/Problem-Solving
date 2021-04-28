#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll input, len, luckyNumber = 0 ;

    cin >> input ;

    string s = to_string(input) ;
    len = s.size() ;

    for(ll i=0;i<len;i++)
    {
         if(s[i] == '4')
             luckyNumber++ ;
         else if (s[i] == '7')
             luckyNumber++ ;
    }

    if((luckyNumber == 7) || (luckyNumber == 4))
        cout << "YES" ;
    else
        cout << "NO" ;


    return 0 ;
}