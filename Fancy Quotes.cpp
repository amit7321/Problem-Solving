#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    string s1,s2="not";
    int t;

    cin>> t ;
    getline(cin,s1);
    for(int i=0;i<t;i++){
    getline(cin,s1);


    size_t found;
    if(find("not",found+3)!=string::npos || find(" not",found+3) || find("not ",found+3)){
        cout<< "Real Fancy"<<"\n" ;
    }
    else
        cout<< "regularly fancy"<<"\n" ;


    }



    return 0;
}
