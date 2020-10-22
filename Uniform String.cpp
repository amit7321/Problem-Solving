#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k;
    cin>> t;

    while(t--){
        cin>> n >> k ;
        char s[n];
        int m=97,j=0;

        for(int i=0;i<n;i++){
                char c=m+j;
                s[i]=c;
                j++;
                if(j==k)
                    j=0;

            }
        for(int i=0;i<n;i++){
                cout<< s[i] ;
           }
           cout<< "\n";

        }
    return 0;
}
