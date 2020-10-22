#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long input;
    int tCase;

    cin >> tCase ;

    while(tCase--){
        cin >> input ;
        cout << (input-1)-(input/2) << "\n" ;
    }

    return 0 ;
}
