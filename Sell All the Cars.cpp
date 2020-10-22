#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase;
    long long input,aProfit,dProfit,n ;
    const int m=(1e9)+7 ;

    cin>> tCase ;

    while(tCase--){
        cin >> n ;
        long long descendingInput[n],ascendingInput[n] ;

        for(int i=0;i<n;i++){
            cin >> input ;
            ascendingInput[i]=descendingInput[i]=input ;
        }

        sort(ascendingInput,ascendingInput+n);
        sort(descendingInput,descendingInput+n,greater<int>());

        aProfit=0 ;
        dProfit=0 ;

        for(int i=0;i<n;i++){
            if(ascendingInput[i]-i>0)
               aProfit=((aProfit%m)+((ascendingInput[i]-i)%m))%m ;
            if(descendingInput[i]-i>0)
                dProfit=((dProfit%m)+((descendingInput[i]-i)%m))%m ;
        }

        if(aProfit>dProfit)
            cout << aProfit << "\n" ;
        else
            cout << dProfit << "\n" ;
    }

    return 0 ;
}



