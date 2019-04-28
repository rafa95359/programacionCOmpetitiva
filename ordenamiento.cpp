#include <bits/stdc++.h>
using namespace std;


void ordenamientoNormal(vector<int> &a){
    int suma=0;
    for ( int i=0; i<a.size(); ++i) {
        for (int j=i+1 ; j<a.size(); ++j ) {
            suma++;
            if( a[i] > a[j]) swap(a[i],a[j]);
        }
    }
     cout<<"suma N "<<suma<<endl;
};

void ordenamiento2(vector<int> &a){
    int suma=0;
    for (int i = 1; i < a.size(); i++) {
        int j=i;
        while(j>0){
            suma++;
            if ( a[j-1] > a[j] ){
                swap(a[j-1],a[j]);
                j--;
            } 
            else break;
        }
    }
    cout<<"suma "<<suma<<endl;

}
void escribirVector( vector<int> a ){
    for ( int i=0; i<a.size(); ++i) {
        cout<< a[i] <<" ";
    }
};
int main () {

    int n;
    cin>>n;
    vector<int> myvector,mu;
    for (int i=0; i<n; i++) {
        int t;
        cin>> t;
        myvector.push_back(t);
    }
    
    ordenamientoNormal(myvector);    
    ordenamiento2(myvector);
    escribirVector(myvector);
  



    return 0;
};