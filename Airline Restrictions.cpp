#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    IOS;
    ll a, b, c, d, e, t;

    cin >> t ;

    tc(t)
    {
        cin >> a >> b >> c >> d >> e ;

        if((a + b <= d && c <= e) || (b + c <= d && a <= e) || (a + c <= d && b <= e) )
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }

    return 0 ;
}