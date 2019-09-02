// inserting into a vector
#include <iostream>
#include <vector>

using namespace std;

int main ()
{   
    vector<char> is_prime(n+1, true);//se crea el tamaño del vector y todos true o false
    //declaracion de vectores y asignacion
    vector<int> myvector {3,100};//myvector=3 100
    vector<int> myvector2 (3,100); //myvector = 100 100 100
    
    
    int sum (0);
    myvector.push_back (100);//el push_back es para insertar elementos
    myvector.push_back (200);
    myvector.push_back (300);

    
    while (!myvector.empty())//el .empty devuelve 1 cuando esta vacio
       {
      sum+=myvector.back();//el back recupera el ultimo elemento
      
      myvector.pop_back();//el pop_back es para eliminar el ultimo elemento
    }

    cout<<myvector.size()<<endl;//el size devuelve la cantidad de elementos =0
///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                          INSERT                              ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////

    vector<int> ::iterator it;//iterador para vectores

    myvector.insert (myvector.end(),10,100);//al final del vector insertamos 10 veces 100

    it = myvector.end();
    it = myvector.insert ( it , 200 );//insertamos al incio 200  

    myvector.insert (it,2,300);

    // "it" ya no es valido,necesitamos cada vez que lo usamos
    it = myvector.begin();    

    vector<int> anothervector (5,400);//anothervector = 400 400
    myvector.insert (it+2,anothervector.begin(),anothervector.end());//insertamos en un rango de valores 

    int myarray [] = { 501,502,503 };
    myvector.insert (myvector.begin(), myarray, myarray+3);

  
    //escribir lo que contiene el vector
    for (it=myvector.begin(); it<myvector.end(); it++)
    cout << ' ' << *it;
    cout<< '\n' <<"size: "<< myvector.size()<<'\n';
 
    
///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            ERASE                             ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////
    
    
     // erase the 6th element
    myvector.erase (myvector.begin()+5);//damos la posicion

     // erase the first 3 elements:
    myvector.erase (myvector.begin(),myvector.begin()+3);//damos un rango de valores

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            SWAP                              ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////
    vector<int> foo (3,100);   
    vector<int> bar (5,200);  

    foo.swap(bar);//reemplaza todos los valores de los vectores 

    cout << "foo contains:";
    for (unsigned i=0; i<foo.size(); i++)
    cout << ' ' << foo[i];
    cout << '\n';

    cout << "bar contains:";
    for (unsigned i=0; i<bar.size(); i++)
    cout << ' ' << bar[i];
    cout << '\n';

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            CLEAR                             ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////  
    
    myvector.clear();//myvector.size = 0 borra todos los elemntos
    
    
    //.front te recupera el primer elemento
    //myvector.at(i)=i; te da el valor de esa posicion
    //resize cambia el tamaño del vector si es menor que size entonces borra el resto

 return 0;
}//