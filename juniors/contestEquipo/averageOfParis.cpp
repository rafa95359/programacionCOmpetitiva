#include <bits/stdc++.h>
#define Long long long 
using namespace std;

int main(){
	Long t;
	cin>>t;
	for(int i=0;i<t;i++){
		Long n;
		cin>>n;
		Long arr[2005]={0};
		for(int j=0;j<n;j++){
			Long aux;
			cin>>aux;
			arr[1000+aux]++;
		}
		Long resp=0;
		for(int r=0;r<2000;r++){
			if(arr[r]>1)resp+=(arr[r]*(arr[r]-1))/2;
			for(int k=r+1;k<2001;k++){
			   if(arr[(r+k)/2] && (r+k)==((r+k)/2)*2)resp+=arr[r]*arr[k];
			}
		}
		cout<<resp<<endl;

	}
}	