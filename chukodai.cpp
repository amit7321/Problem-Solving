#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll t, a, b ;
    char x, y ;
    string s ;

    cin >> s ;
    cin >> a >> b ;

    x = s[a - 1] ;
    y = s[b - 1] ;

    s[a - 1] = y ;
    s[b - 1] = x ;

    cout << s ;


    return 0 ;
}

