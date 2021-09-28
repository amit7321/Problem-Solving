#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll n, t ;
    string output ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;

        if(n == 1)
            cout << '3' << endl ;
        else
        {
            output.push_back('3') ;
            for(int i=0;i<n-2;i++)
            {
                output.push_back('0') ;
            }
            output.push_back('3') ;

            cout << output << endl ;

            output.clear() ;
        }

    }


    return 0 ;
}