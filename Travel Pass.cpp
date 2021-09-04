#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    IOS;
    ll a, b, n, t, totalTime = 0 ;
    string s ;

    cin >> t ;

    tc(t)
    {
        cin >> n >> a >> b ;
        cin >> s ;

        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
                totalTime += a ;
            else
                totalTime += b ;
        }
        cout << totalTime << endl ;
        totalTime = 0 ;
    }


    return 0 ;
}