#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll t,n;

    cin >> t ;

    tc(t)
    {
        cin >> n ;

        int arr[n+1] ;

        for(int i=1; i<=n; i++)
        {
            cin >> arr[i] ;
        }

        if(arr[1]+arr[2]<=arr[n])
            cout << 1 << " " << 2 << " " << n << endl ;
        else
            cout << "-1" << endl ;

    }

return 0 ;
}
