#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t, a, b, c, x ;
    vector <int> v ;

    cin >> t ;

    tc(t)
    {
        for(int i=0;i<7;i++)
        {
            cin >> x ;
            v.push_back(x) ;
        }

        cout << v[0] << " " << v[1] << " " << v[6] - (v[0] + v[1]) << endl ;

        v.clear() ;
    }



    return 0 ;
}

