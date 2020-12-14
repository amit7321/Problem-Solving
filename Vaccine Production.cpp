#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll d1,d2,v1,v2,p,totalVaccine = 0,i = 1,j = 1 ;

    cin >> d1 >> v1 >> d2 >> v2 >> p ;

    while(1)
    {
        if(i>=d1)
        {
            totalVaccine += v1 ;
        }
        if(j>=d2)
        {
            totalVaccine += v2 ;
        }
        if(totalVaccine >= p)
            break;

        i++ ;
        j++ ;

    }

    cout << i ;

    return 0 ;
}
