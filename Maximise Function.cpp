#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t,n,first,last,x,y,z ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;
        int arr[n] ;
        int sort_arr[n] ;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
        }


        sort(arr,arr+n) ;

        first = arr[0] ;
        last = arr[n-1] ;


        /*for(int i=0;i<n;i++)
        {
            if(first == arr[i])
                x = i ;
            if(last == arr[i])
                z = i ;
        }*/

        cout << 2*abs(last-first) << endl ;
    }


    return 0 ;
}
