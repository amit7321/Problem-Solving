#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll t,n,size,x,p ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;
        p = n+1 ;
        int input[n],reverseArr[n],output[n] ;

        for(int i=1;i<=n;i++)
        {
            cin >> x ;
            input[i] = reverseArr[p-i] = x ;
        }

        if(n%2 == 0)
            size = n/2 ;
        else
            size = (n/2)+1 ;

        int j = 0 ;

        for(int i=1;i<=size;i++)
        {
            output[j] = input[i] ;
            j++ ;
            output[j] = reverseArr[i];
            j++ ;
        }

        for(int i=0;i<n;i++)
        {
            cout << output[i] << " " ;
        }
        cout << endl ;

    }

    return 0 ;
}
