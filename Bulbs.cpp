#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS;

    ll t,bulb,x,numberOfBulb ;

    cin >> t >> bulb ;

    ll arr[bulb];
    memset(arr,0,sizeof(arr));

    tc(t)
    {
        cin >> x ;
        for(int i=0;i<x;i++)
        {
            cin >> numberOfBulb;
            arr[numberOfBulb-1] = 1;
        }
    }

    bool temp = true ;
    for(int i=0;i<bulb;i++)
    {
        if(arr[i] == 0)
        {
            cout << "NO" ;
            temp = false ;
            break;
        }
    }
    if(temp == true)
    {
        cout << "YES" ;
    }


    return 0 ;
}
