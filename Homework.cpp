#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int vacation,assignments,sum=0 ;

    cin >> vacation >> assignments ;

    int arr[assignments];

    for(int i=0;i<assignments;i++)
    {
        cin >> arr[i] ;
        sum +=arr[i] ;
    }

    if(sum>vacation)
        cout << "-1" ;
    else
        cout << vacation-sum ;

    return 0 ;



}
