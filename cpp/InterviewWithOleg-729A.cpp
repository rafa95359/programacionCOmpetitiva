#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int found,fin=0;   
   	do{   		
   		found = a.find("ogo");
   		fin=found+2;   		
   		while( a[fin+1]=='g' && a[fin+2]=='o') fin+=2;
   		if(found != -1)a.replace(found,fin+1-found,"***");  	 		
   		
	}while(found != -1);
	cout<<a<<endl;

    return 0;
}