#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    string s ;
    ll lowerCase = 0, upperCase = 0, len ;

    cin >> s ;
    len = s.length();

    for(int i=0;i<len;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            lowerCase++ ;
        else
            upperCase++ ;
    }

    if((lowerCase > upperCase) || (lowerCase == upperCase))
        transform(s.begin(), s.end(), s.begin(), ::tolower) ;
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper) ;

    cout << s ;


    return 0 ;
}