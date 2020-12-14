#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll t,a,b,oddNumberA,evenNumberA,oddNumberB,evenNumberB ;

    cin >> t ;

    tc(t)
    {
        cin >> a >> b ;

        if(a%2 == 0)
        {
            oddNumberA = evenNumberA = a/2 ;
        }
        else
        {
            oddNumberA = (a/2)+1 ;
            evenNumberA = a - oddNumberA ;
        }

        if(b%2 == 0)
        {
            oddNumberB = evenNumberB = b/2 ;
        }
        else
        {
            oddNumberB = (b/2)+1 ;
            evenNumberB = b - oddNumberB ;
        }

        cout <<  (oddNumberA * oddNumberB) + (evenNumberB * evenNumberA) << endl ;
    }


    return 0 ;
}
