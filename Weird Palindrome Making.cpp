#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t, n, c, x ;
    vector <int> v ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;
        c = 0 ;
        for(int i=0;i<n;i++)
        {
            cin >> x ;
            if(x%2 == 1)
                c++ ;
        }

        cout << c/2 << endl ;

    }

    return 0 ;
}

