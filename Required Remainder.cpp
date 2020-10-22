#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS;

    ll k,t,x,y,n ;

    cin >> t ;

    tc(t)
    {
        cin >> x >> y >> n ;
        k = n-(n%x)+y ;

        if(k>n)
            cout << k-x << endl ;
        else
            cout << k << endl ;
    }



    return 0 ;
}

