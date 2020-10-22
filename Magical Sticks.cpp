#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t,n ;
    //double n ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;

        if(n%2==0)
            cout << (n/2) << endl ;
        else
            cout << (n/2)+1 << endl ;

    }


    return 0 ;
}
