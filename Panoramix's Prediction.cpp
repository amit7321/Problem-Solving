#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll n, m ;
    bool prime = false ;
    int arr [] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    cin >> n >> m ;

    for(int i=0;i<15;i++)
    {
        if(arr[i] == n && arr[i+1] == m)
        {
            prime = true ;
            cout << "YES" ;
        }

    }
    if(prime == false)
        cout << "NO" ;

    return 0 ;
}
