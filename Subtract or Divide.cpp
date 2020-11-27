#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    ll t,number ;

    cin >> t ;

    tc(t)
    {
        cin >> number ;
        if(number == 1)
            cout << "0" << endl ;
        else if(number == 2)
            cout << "1" << endl ;
        else if((number % 2 == 0) || (number == 3))
            cout << "2" << endl ;
        else if(number % 2!= 0)
            cout << "3" << endl ;

    }


    return 0 ;
}