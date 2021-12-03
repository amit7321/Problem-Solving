#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t, a, b, p, q ;

    cin >> t ;

    tc(t)
    {
        cin >> a >> b >> p >> q ;

        if((a == p) && (b == q))
            cout << "0" << endl ;
        else if(((a + b) % 2) == ((p + q) % 2))
            cout << "2" << endl ;
        else
            cout << "1" << endl ;


    }


    return 0 ;
}
