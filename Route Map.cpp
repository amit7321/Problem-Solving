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
    vector <string> s ;
    vector <string> t ;

    string x, y ;
    bool temp = false ;

    cin >> n >> m ;

    for(int i=0;i<n;i++)
    {
        cin >> x ;
        s.push_back(x) ;
    }

    for(int i=0;i<m;i++)
    {
        cin >> y ;
        t.push_back(y) ;
    }

    unordered_set <string> st(t.begin(), t.end()) ;


    for(auto p : s)
    {
        if(st.count(p))
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }

    return 0 ;
}
