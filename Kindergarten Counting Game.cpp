#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int counts,n,temp;

    while(getline(cin,input)){
        counts=0,temp=0;
        n=input.size();
        for(int i=0;i<n;i++){
           if((input[i]>='A' && input[i]<='Z') || (input[i]>='a' && input[i]<='z'))
               temp=1 ;
           else{
               counts +=temp;
               temp=0;
           }

        }
        counts +=temp;
        cout << counts << "\n" ;
    }

    return 0 ;
}



