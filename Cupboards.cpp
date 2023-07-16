#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)


int main()
{
    IOS ;
    ll t = 0, x = 0, y = 0, m = 0, n = 0;
    unordered_map<int, int> ump1;
    unordered_map<int, int> ump2;
    vector<int> v1;
    vector<int> v2;

    cin >> t ;

    for(int i=0;i<t;i++) {
        cin >> x >> y ;
        v1.push_back(x);
        v2.push_back(y);
    }

    for(int i=0;i<t;i++) {
        ump1[v1[i]]++ ;
        ump2[v2[i]]++ ;
    }

    int lo = ump1[0];
    int lc = ump1[1];
    int ro = ump2[0];
    int rc = ump2[1];

    if (lo == t || lc == t) {
        m = 0;
    }
     if (ro == t || rc == t) {
        n = 0;
    }
     if (lo == lc) {
         m = lo;
     }
     if (ro == rc) {
         n = ro;
     }
     if (lo != lc) {
        m = min(lo, lc);
    }
    if (ro != rc) {
        n = min(ro, rc);
    }

    cout << m + n ;

    return 0 ;
}