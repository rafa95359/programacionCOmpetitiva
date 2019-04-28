#include <bits/stdc++.h>
using namespace std;

void aumentar(char a,int &x,int &y,int &z){
    if(a=='A')x++;
    if(a=='B')y++;
    if(a=='C')z++;
}
void ordenar(pair<int,char> &x,pair<int,char> &y,pair<int,char> &z){
    if(x.first>y.first)swap(x,y);
    if(x.first>z.first)swap(x,z);
    if(y.first>z.first)swap(y,z);

}
int main(){
        
    string arr[3];

    cin>>arr[0]>>arr[1]>>arr[2];
    pair <int,char> x,y,z;
    x.first=y.first=z.first=0;
    x.second='A';
    y.second='B';
    z.second='C';
    
    for(int i=0;i<3;i++){
        if(arr[i][1] == '>') aumentar(arr[i][0],x.first,y.first,z.first);
        else aumentar(arr[i][2],x.first,y.first,z.first);
    };
    ordenar(x,y,z);
    
    if(x.first == y.first || x.first==z.first || y.first==z.first){
        cout<<"Impossible"<<endl;
    }else{
        cout<<x.second<<y.second<<z.second<<endl;
    }   
    
    return 0;
}