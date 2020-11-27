#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;

    ll question,score ;

    cin >> question >> score ;
    char s ;

    for(int i=0;i<question; i++)
    {
        cin >> s ;
        if(s == 'x' && score!= 0)
            score-- ;
        else if(s == 'o')
            score++ ;
    }
    cout << score ;

    return 0 ;
}