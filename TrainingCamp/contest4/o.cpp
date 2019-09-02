#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[ 8 ][ 8 ];
int vis[ 8 ][ 8 ];
int d[ 8 ][ 8 ];
int dx[8]={1,-1,1,-1,2,-2,2,-2};
int dy[8]={-2,-2,2,2,1,1,-1,-1};
int main(){
    string s1, s2;
    while ( cin>>s1>>s2 ){
        int x1 = s1[ 0 ]-'a';
        int y1 = s1[ 1 ]-'0'-1;
        int x2 = s2[ 0 ]-'a';
        int y2 = s2[ 1 ]-'0'-1;
        queue< pair< int , int > > Q;
        memset( d, -1, sizeof( d ) );
        d[ x1 ][ y1 ] = 0;
        Q.push(make_pair( x1, y1 ));
        while ( !Q.empty() ){
            pair< int , int > u = Q.front();
            Q.pop();
            int x1 = u.first;
            int y1 = u.second;
            for ( int i = 0; i < 8 ; i++ ){
                int xx = x1 + dx[ i ];
                int yy = y1 + dy[ i ];
                if ( xx >= 8 || xx < 0 || yy >= 8 || yy < 0 ) continue;
                if ( d[ xx ][ yy ] == -1 ){
                    d[ xx ][ yy ] = d[ x1 ][ y1 ] +1;
                    Q.push( make_pair(xx,yy) );
                } 
            }
        }


//Hola
        printf("To get from %s to %s takes %d knight moves.\n",s1.c_str(),s2.c_str(),d[x2][y2]);

    }


}
