#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tCase,numOfInst;
    string instruction ;

    cin>> tCase ;

    while(tCase--){
        cin>> numOfInst ;

        int arr[numOfInst] ;
        int position=0 ;

        for(int i=0;i<numOfInst;i++){

            getline(cin,instruction);

            if(instruction[0]=='L')
                arr[i]=-1;
            else if(instruction[0]=='R')
                arr[i]=1 ;
            else
                arr[i]=arr[int(instruction[8])];


        }
        int sum=0;
       cout<< accumulate(arr,arr+numOfInst,sum) <<"\n" ;

    }

    return 0 ;
}
