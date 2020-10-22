#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCase,firstNum,secondNum,sum ;

    cin>> testCase ;
    int x=testCase ;

    while(testCase--){
        cin>> firstNum ;
        cin>> secondNum ;
        sum=0;

        for(int i=firstNum;i<=secondNum;i++){
            if(i%2!=0)
                sum +=i;
        }

        cout<< "Case " << (x-testCase) << ": " << sum <<"\n" ;
    }

    return 0 ;
}
