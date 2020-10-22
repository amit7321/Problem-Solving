#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double salary,sold;
    string name;

    cin>> name ;
    cin>> salary ;
    cin>> sold ;

    cout<< "TOTAL = R$ " << fixed << setprecision(2) << (sold*.15)+salary << endl ;

    return 0 ;

}
