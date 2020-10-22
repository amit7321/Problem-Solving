#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  tc,farmers,sum;
    long double x,degree,animals,totalSize;

    while(cin>> tc){

    while(tc--){
        cin>> farmers ;
        sum=0.0 ;

        while(farmers--){
            cin>> totalSize >>  animals >> degree ;
            x= totalSize*degree ;
            sum +=x ;
        }

        cout<< sum <<"\n" ;
    }

    }

    return 0 ;
}
