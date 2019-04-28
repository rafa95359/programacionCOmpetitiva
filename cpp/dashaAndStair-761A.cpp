#include <bits/stdc++.h>

using namespace std;

bool esPosible(int a,int b){
	if(a==0 && b==0) return false;
	if(a-b>1) return false;
	if(b-a>1) return false;
	return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    if(esPosible(a,b))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}