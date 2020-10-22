#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll n ;

    cin >> n ;

    int a[n+1] ;

    if(n%2==0)
    {
        //int j=1 ;
        //int k=2 ;
        for(int i=1;i<=n;i++)
            a[i]=i ;

       /* for(int i=1;i<=n;i++)
        {
            cout << a[i] << " " ;
        }*/

        for(int i=1;i<=n-1;i += 2)
        {
            swap(a[i],a[i+1]) ;
        }

        for(int i=1;i<=n;i++)
        {
            cout << a[i] << " " ;
        }

    }
    else
        cout << "-1" << endl ;



    return 0 ;
}
