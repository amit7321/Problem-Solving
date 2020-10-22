#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[3];
    int t,i=0,j=0,k=0;

    cin>> t ;

    while(t--){

        for(int l=0;l<3;l++){
            cin>> arr[l] ;
        }

        i += arr[0];
        j += arr[1];
        k += arr[2];



    }

    if(i==0 && j==0 && k==0)
        cout<<"YES" ;
    else
        cout<<"NO" ;

    return 0;
}
