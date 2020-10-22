#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,n;
    int a[2001];

    cin>> tCase ;

    while(tCase--){
        cin>> n ;

        for(int i=0;i<n;i++){
            cin>> a[i] ;
        }
        int sum=0 ;

        sum=accumulate(a,a+n,sum) ;

        if((sum%2)!=0)
            cout<<"YES\n" ;
        else
            cout<<"NO\n" ;


    }

    return 0 ;

}
