#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> adj[100000];

    int n,m,k,x,y;

    cin>> n >> m >> k ;

    for(int i=0;i<m;i++){
        cin>> x >> y ;
        adj[x].push_back(y);
    }


    if(m>k)
        cout<<"-1" ;
    else
        cout<< m-(n-k);

    return 0;
}
