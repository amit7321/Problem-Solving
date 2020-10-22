#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n ;

    cin >> n ;
    int x=n%10 ;

    if(x==2 || x==4 || x==5 || x==7 || x==9)
        cout << "hon" ;
    if(x==0 || x==1 || x==6 || x==8)
        cout << "pon" ;
    if(x==3)
        cout << "bon" ;


    return 0 ;
}

