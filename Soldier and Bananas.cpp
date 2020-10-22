#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k,n,w,cost=0;

    cin>> k >> n >> w ;

    for(int i=1;i<=w;i++){
        cost +=(i*k) ;
    }

    if(cost>n)
        cout<< (cost-n) ;
    else
        cout<<"0" ;
}
