#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    IOS ;
    ll t,n,k,temp ;
    string s ;

    cin >> t ;

    tc(t)
    {
        cin >> n >> k ;
        cin >> s ;
        temp = 0 ;

        for(int i=0;i<n;i++)
        {
            if(s[i] == '*')
                temp++ ;
            else
            {
                if(temp != k)
                    temp = 0 ;
                else
                    break;
            }

        }
        if(temp == k)
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;

    }


    return 0 ;
}