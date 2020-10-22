#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,r,g,b,x,y,a[3];

    cin>> t ;

    while(t--){

        cin>> r >> g >> b ;

        a[0]=r;
        a[1]=g;
        a[2]=b;


        sort(a,a+3,greater<int>());

        if((a[0]-1)<=(a[1]+a[2]))
            cout<< "Yes\n";
        else
            cout<<"No\n";



    }

    return 0;
}
