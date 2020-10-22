#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,a[100000],n,x;


    cin>> t ;

    for(int i=1;i<=t;i++){
        cin>> n ;
        int temp=-1;
        while(n--){
            cin>> x ;
            temp=max(x,temp);
        }

        cout<< "Case " << i <<": " << temp << "\n" ;
    }

    return 0 ;

}
