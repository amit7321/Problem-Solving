#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y,b,r;

    cin>> y >> b >> r ;

    if(r<b && r<y){
        b=r-1;
        y=b-1;
    }
    if(b<y && b<r){
        y=b-1;
        r=b+1;
    }
    if(y<b && y<r){
        b=y+1;
        r=b+1;l
    }



    cout<< b+y+r ;

    return 0;
}
