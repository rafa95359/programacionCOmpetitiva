#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++);
typedef  long long Long;
int main(){
    Long x,k;
    cin>>x>>k;

    //Escribir un 1 en la k-ésima posición del desarrollo binario de x
    x=x | (1 << k);
    //Escribir un 0  en la k-ésima posición del desarrollo binario de x
    x=x & ~(1 << k);
    //Invertir el bit en la k-ésima posición del desarrollo binario de x
    x=x ^ (1 << k);
    //Poner en 0 el bit menos significativo de x que tiene un 1
    x=x & (x-1);
    //Poner en 0todos los bits, salvo el menos significativo (más a la derecha) de x que tiene un 1
    x= x & (-x);
    // Invertir todos los bits que vienen después del menos significativo de x que tiene un 1
    x= x | (x-1);


    Long a=__builtin_clz(x);        //Nos da la cantidad de ceros consecutivos al comienzo del desarrollo binario de x
    a=__builtin_ctz(x) ;       //Nos da la cantidad de ceros consecutivos al final del desarrollo binario de x
    a=__builtin_popcount(x) ;  //Nos da la cantidad bits iguales a 1 que hay en el desarrollo de x
    a=__builtin_parity(x);     //Nos da la paridad (0 si es par, 1 si es impar) de la cantidad de bits igual a 1 que hay en el desarrollo de x.
   

   /*Crear un conjunto {1,3,4,8}*/
    x |= (1 << 1); // pongo en 1 el bit correspondiente a la posición 1
    x |= (1 << 3); // pongo en 1 el bit correspondiente a la posición 3
    x |= (1 << 4); // pongo en 1 el bit correspondiente a la posición 4
    x |= (1 << 8); // pongo en 1 el bit correspondiente a la posición 8    
    /*Si quisiéramos iterar en los elementos de una máscara, podríamos hacerlo de la siguiente forma. */
    int n;
    cin>>n;    
    for (int i = 0; i < n; i++)
    {
       if ((x & (1 << i)) != 0 ) // Si el i-ésimo bit tiene un 1...
       {
          // Hago lo que quiero con i (o A[i] si queremos usar los valores) ...
       }
    }


    /*Una forma de iterar todos los subconjuntos de n elementos es*/

    for (int b = 0; b < (1 << n); b++)
    {
       // Hago lo que quiero con el subconjunto b
    }
    /*
    Si tenemos una máscara x que ya representa a un conjunto X,
     podemos iterar en todos los subconjuntos de los elementos de esa máscara xde la siguiente forma*/

    int b = 0;
    do
    {
       // Hago lo que quiero con el subconjunto b, incluido en el subconjunto que representa x
    }
    while (b = (b-x)&x);
    
    /*La siguiente en cambio los recorre de mayor a menor, 
     y no incluye ni la máscara x ni la máscara 0 (correspondientes a X y a ∅).*/

    for (int b = (x-1)&x; b != 0 ; b=(b-1)&x)
    {
        // Hago lo que quiero con el subconjunto b, incluido en el subconjunto que representa x
    }














    return 0;

}