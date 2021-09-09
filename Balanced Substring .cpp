#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    IOS;
    ll n, t ;
    string s ;
    bool temp ;

    cin >> t ;

    tc(t)
    {
        cin >> n ;
        cin >> s ;

        temp = false ;

        if(n==1)
        {
            cout << "-1 -1" << endl ;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i] != s[i+1])
                {
                    temp = true ;
                    cout << i+1 << " " << i+2 << endl ;
                    break;
                }

            }
            if(temp == false)
                cout << "-1 -1" << endl ;
        }

    }


    return 0 ;
}
