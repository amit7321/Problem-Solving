#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n,i=18;
    int t,temp=0;

    cin>> t ;
    cin>> n ;

    while(t--){
        while(1)
        {
            i++;


            if(i%10==0)
                temp++;
            if(temp==n)
                cout<< temp ;
            break;
        }


    }


}
