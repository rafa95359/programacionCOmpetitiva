#include <bits/stdc++.h>

using namespace std;

int main () {

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                          APPEND                              ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////

  string str;
  string str2="Writing ";
  string str3="print 10 and then 5 more";

  str.append(str2);                       // "Writing " Se le agrega str2 al final a str
  str.append(str3,6,3);                   // "10 "  Le agramamos una parte de str3 de acuerdo a los especigicadores
  str.append("dots are cool",5);          // "dots "Le agregamos hasta un limite
  str.append("here: ");                   // "here: "
  str.append(10u,'.');                    // ".........." Se le agregan 10 .
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"

  cout << str << '\n';
///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            EMPTY                             ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////
  if(str.empty()) cout<<"vacio"<<endl;

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                        PUSH_BACK                             ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////
     str.push_back('a');//solo permite caracteres
     cout << str << '\n';

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                          REPLACE                             ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////


string base="this is a test string.";
str2="n example";
str3="sample phrase";
string str4="useful.";



//                                    0123456789*123456789*12345
str=base; 
 
str.replace(9,5,str2);          // "this is an example string." (1) A partir de pos9 los 5 siguientes se reemplazan por str2
cout<<"str : "<<str<<endl;   
str.replace(19,6,str3,7,6);     // "this is an example phrase." (2) A partir de pos19 los 6 sig se reemplazan por str3 pos 7 hasta los 6 sig
cout<<"str : "<<str<<endl;
str.replace(8,10,"just a");     // "this is just a phrase."     (3)
str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5) El pos22 se reemplaza por 3!


///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            FIND                              ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////

str.clear();
str2.clear();
str ="There are two needles in this haystack neewith needles.";
str2 ="needle";

std::size_t found = str.find(str2);
//size_t es un entero sin signo
//std::string::npos es el posible valor mas grande para size_t

if (found!=std::string::npos)
  cout << "first 'needle' found at: " << found << '\n';

found=str.find("needles are small",found+1,3)   ;//lo que busca es  a partir de la posicion encontrada anteriormente+1 y cuantos deben ser valores  iguales
if (found!=std::string::npos)
  cout << "second 'needle' found at: " << found << '\n';

found=str.find("haystack");
if (found!=std::string::npos)
  cout << "'haystack' also found at: " << found << '\n';

found=str.find('.');
if (found!=std::string::npos)
  std::cout << "Period found at: " << found << '\n';

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            COMPARE                           ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////


string str1 ="green apple";
str2 = "red apple";

  if (str1.compare(str2) != 0)
    std::cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(6,5,"apple") == 0)//comparamos a partir del 6 los siguientes 5 de str1
    std::cout << "still, " << str1 << " is an apple\n";

  if (str2.compare(str2.size()-5,5,"apple") == 0)
    std::cout << "and " << str2 << " is also an apple\n";

  if (str1.compare(6,5,str2,4,5) == 0)//comparaciones entre rangos entre srtr1 y str2
    std::cout << "therefore, both are apples\n";

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            SUBSTRING                         ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////

str="We think in generalities, but we live in details."; 
str2 = str.substr (3,5);     // "think"
size_t pos = str.find("live");      // position of "live" in str
str3 = str.substr (pos);     // get from "live" to the end
cout << str2 << ' ' << str3 << '\n';

///////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////                            FIND_FIRST_OF                     ///////////////////  
///////////////////////////////////////////////////////////////////////////////////////////////////
str ="reemplaza todas las vocales con astericos";

found = str.find_first_of("aeiou"); //devuelve la posicion donde se encuentra por primera vez uno de los valores de la cadena introducida
 while (found!=std::string::npos)
 {
   str[found]='*';
   found=str.find_first_of("aeiou",found+1);//podemos definir a partir de que posicion lo hace
 }

  std::cout << str << '\n';


//find_last_of (comienza del final)
//find_first_not_of (encuentra el  primero que no es compatible con la cadena introducida)
//find_last_not_of


//insert y el resto es igual que en vector  

///////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////pasar todo a maysucula////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
 transform(s.begin(), s.end(), s.begin(), (int (*)(int))toupper);
  return 0;  
}