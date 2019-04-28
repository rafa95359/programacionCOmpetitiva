#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string color;
    cin>>color;


    char inicio=color[0];
    int cant=0;
    for(int i=1; i<n;++i){
        if(color[i]== inicio) cant++;
        else{
            inicio=color[i];
        }
    }
    cout<<cant<<endl;



    return 0;
}