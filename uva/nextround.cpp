#include <iostream>

using namespace std;

int main (){
	int n,k;
	do {
	cin>>n>>k;
	} while (n<k);
	int m[n];
	for (int j=0;j<n;j++){
		cin>>m[j];
	}
	int a=-1;
	if (m[k-1]!=0){
		while (m[k-1]==m[k]){
			k=k+1;
		}
		cout <<k<<endl;
	}
	else {
		do{
			a=a+1;
		} while (m[a]!=0);
		cout <<a<<endl;	
	}
	return 0;
}