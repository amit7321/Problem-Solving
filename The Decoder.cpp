#include<bits/stdc++.h>
using namespace std;

int main()
{


    char ch;

    while(scanf("%c",&ch)!=EOF){
        if(ch=='\n')
            cout<< '\n' ;
        else
            cout<< (char) (ch-7) ;
    }

    return 0;
}
