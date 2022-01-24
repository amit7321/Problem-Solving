#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll n, x ;
    vector <int> v ;
    unordered_map <int, int> umap ;

    cin >> n ;

    for(int i=0;i<((4*n)-1);i++)
    {
        cin >> x ;
        v.push_back(x) ;
    }

    for(auto p : v)
        umap[p]++ ;

    for(auto m : umap)
    {
        if(m.second != 4)
        {
            cout << m.first ;
            break ;
        }



    }

    v.clear() ;

    return 0 ;
}

