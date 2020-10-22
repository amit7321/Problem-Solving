#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);


int main()
{
    IOS ;

    ll t,n,sum;

    cin >> t ;

    tc(t)
    {
        cin >> n ;

        int a[n] ;
        sum=0 ;

        for(int i=0;i<n;i++)
        {
            cin >> a[i] ;
        }

        for(int i=0;i<n-1;i++)
        {
            sum += abs(a[i]-a[i+1])-1 ;
        }

        cout << sum << endl ;
    }




    return 0 ;
}

