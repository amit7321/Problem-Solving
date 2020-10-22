#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string character;
    int counter=1,j=0;


    while(getline(cin,character)){
        for(int i=0;character[i];i++){

        if(character[i]=='\"' && (counter%2)==1){
            cout<<"``" ;
            counter++;
            continue;
        }
        else if(character[i]=='\"' && (counter%2==0)){
            cout<<"''" ;
            counter++;
            continue;
        }
        else if(character[i]=='\n'){
            cout<< character[i];
            continue;
        }

        cout<< character[i] ;

       }
    }


    return 0;

}
