#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1;
    string s2="hello";

    cin>> s1 ;

    int n=s1.size();
    int j=0,c=0;

    for(int i=0;i<n;i++){
        if(s1[i]==s2[j]){
           j++;
           c++;
        }

    }

     if(c==5)
        cout<<"YES" ;
     else
        cout<<"NO" ;

     return 0;


}
