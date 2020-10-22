#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,counts=0;

    cin>> n ;

    int a[n];


    for(int i=0;i<n;i++){
        cin>> a[i];
    }


    int sum=accumulate(a,a+n,0);

    if(sum==0)
        cout<< "0" ;
    else if(sum>=1 && sum<4)
        cout<<"1" ;
    else if(sum>=4){

    counts=sum/4 ;

    //cout<< counts <<endl;

    if(remainder(sum,4)!=0)
        counts++;

        cout<< counts ;
    }

    return 0;
}
