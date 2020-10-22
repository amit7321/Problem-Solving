#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll x,y,z,t ;

    cin >> t ;

    tc(t)
    {
        cin >> x >> y >> z ;

        if(x==y && x>z)
            cout << "Yes" << endl << x <<" " << z << " " << z << endl ;
        else if(y==z && y>x)
            cout << "Yes" << endl << y <<" " << x << " " << x << endl ;
        else if(x==z && x>y)
             cout << "Yes" << endl << x << " " << y << " " << y << endl ;
        else if(x==y && y==z && z==x)
             cout << "Yes" << endl << x << " " << y << " " << z << endl ;
        else
            cout << "No" << endl ;

    }


    return 0 ;
}

