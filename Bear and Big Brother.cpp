#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    int a,b,count=0 ;

    cin >> a >> b ;

    while (true)
    {
        a *= 3 ;
        b *= 2 ;
        count++ ;
        if(a>b)
        {
            cout << count ;
            break;
        }

    }



    return 0 ;
}
