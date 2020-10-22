#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,a,b,c,n;
    int arr[3];

    cin>> t ;

    while(t--){
        cin>> a >> b >> c >> n ;
        int avgCoin=(a+b+c+n)/3 ;

        if((a+b+c+n)%3!=0)
            cout<< "NO\n" ;
        else{
            if(a>avgCoin || b>avgCoin || c>avgCoin)
                cout<< "NO\n" ;
            else
                cout<<"YES\n" ;
        }

    }

    return 0;
}
