#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t, t1, t2, r1, r2 ;
    double x1, x2, y1, y2 ;

    cin >> t ;

    tc(t)
    {
        cin >> t1 >> t2 >> r1 >> r2 ;

        x1 = t1 * t1 ;
        y1 = t2 * t2 ;
        x2 = ((r1 * r1) * r1) ;
        y2 = ((r2 * r2) * r2) ;

        if((x1/x2) == (y1/y2))
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }


    return 0 ;
}

