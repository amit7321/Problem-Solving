#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1,s2;

    cin >> s1 ;

    int n=s1.size();
    int temp=0;

    sort(s1.begin(),s1.end());

    for(int i=0;i<n;i++){
        if(s1[i]!=s1[i+1])
            temp++;

    }


    if(temp%2!=0)
        cout<<"IGNORE HIM!" ;
    else
        cout<<"CHAT WITH HER!" ;


    return 0;

}
