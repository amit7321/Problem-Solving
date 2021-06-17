#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    int n;
    double sum = 0.0 ;
    cin >> n ;

    int arr[n] ;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }

    sum = accumulate(arr, arr+n, sum) ;
    cout << sum/n ;


    return 0 ;
}
