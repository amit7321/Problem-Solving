#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m,q,a,b,x,y;

    cin>> n >> m ;

    bool g[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g[n][n]=false;
        }
    }

    for(int i=0;i<m;i++){
        cin>> a >> b ;
        g[a][b]=true;
    }

    while(q--){
        cin>> a >> b;
        if(g[a][b]==true)
            cout<< "YES" ;
        else
            cout<< "NO" ;
    }

    return 0;

}
