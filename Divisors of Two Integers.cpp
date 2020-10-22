#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,x,y,p=0;

    cin>> n ;

    int a[n];

    for(int i=0;i<n;i++){
        cin>> a[i] ;
    }

    for(int i=0;i<n;i++){
        if((a[p]*2)!=a[i]){
            cout<< a[p]<<" ";
            p++;
            continue;
           }
           p++;
    }


    return 0;
}
