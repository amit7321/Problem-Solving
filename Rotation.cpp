#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s,t;
    int n,j=0;

    cin>> n ;
    cin>> s ;
    cin>> t ;

    for(int i=0;i<n;i++){
        if(s[i]!=t[i])
            j++;
    }

    cout<< n-j ;

    return 0;
}
