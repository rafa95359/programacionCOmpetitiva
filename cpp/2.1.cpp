#include<bits/stdc++.h>

using namespace std;
int main(){

    const int max = 3002;
    bool arr[max] = {0};
	
    int n; 
	cin>>n;
    for(int i = 0; i < n; i++){
		int t; 
		cin>>t;
		arr[t] = 1;
	}

    for(int i = 1; i < max; i++){
        if(!arr[i]){
		cout<<i<<endl;
		break;}
    }
    return 0;
}