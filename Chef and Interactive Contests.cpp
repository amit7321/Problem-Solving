#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,r,R;

    cin>> n >> r ;

    while(n--){
        cin>> R ;
        if(R>=r)
            cout<<"Good boi"<<"\n";
        else
            cout<<"Bad boi"<<"\n";

    }

    return 0;
}
