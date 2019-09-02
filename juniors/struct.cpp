#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i , n) for(Long i = 0; i < (Long)n ; i++)
#define pb push_back

using namespace std;

typedef long long Long;


struct Estudiante{
	string nombre , apellido , codigo;
	int edad;
	
	Estudiante(string nom , string ape , string cod , int e){
		nombre = nom;
		apellido = ape;
		codigo = cod;
		edad = e;
	}
	
	Estudiante(){
		edad = 0;
	}
	
	void cumple(){
		edad++;
	}
	
};



struct Punto{
	int x , y;
	
	double modulo(){
		return x * x + y * y;
	}
	
	double norma(){
		return sqrt( modulo());
	}
	
	
};

typedef Punto Vector;

int productoPunto( Punto A, Punto B){
	return A.x * B.x + A.y + B.y;
}

vector<Estudiante> E;

bool cmp(const Estudiante &a , const Estudiante &b){
	return a.apellido < b.apellido;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Estudiante oskar;
	oskar.nombre = "Oskar";
	oskar.apellido = "Lobaton";
	oskar.codigo = "16515615F";
	oskar.edad = 18;
	
	oskar.cumple();
	
	E.push_back(oskar);
	
	//Estudiante x = Estudiante("Emanuel" , "Huamani","0001111X" , 18 );
	
	E.push_back(Estudiante("Emanuel" , "Huamani","0001111X" , 18 ));
	
	sort(E.begin(), E.end() , cmp );
	
	for(Long i = 0; i < E.size(); i++){
		cout << E[i].apellido << endl;
	}
	
	Vector v;
	v.x = 5;
	v.y = 6;
	
	cout << v.modulo() << endl;
	
	return 0;
}
