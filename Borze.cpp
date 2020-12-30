#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    string s ;
    cin >> s ;

    int n = s.size() ;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '-' && s[i+1] == '.')
        {
            cout << "1" ;
            i++ ;
        }
        else if(s[i] == '-' && s[i+1] == '-')
        {
            cout << "2" ;
            i++ ;
        }
        else
        {
            cout << "0" ;
        }

    }


    return 0 ;
}
