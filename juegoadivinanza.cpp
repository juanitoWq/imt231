
#include <iostream>
using namespace std;
int main(){
cout << "********************************************************"<<endl;
cout << "*bienvenido al juego de la adivinanza *"<<endl;
cout<< "*******************************************************"<<endl;
int numero_secreto = 42;
cout<< "el numero secreto es ... " << numero_secreto << ". no lo digas a nadie! " <<endl;
int adivina;
cout<<" cual es el numero ? "<<endl;
cin>> adivina;
cout <<"el valor del numero es " << adivina<< endl;
 if (adivina ==numero_secreto ){
 cout <<"felicitaciones ... adivino el numero secreto"<<endl;
 }

 else if (adivina >numero_secreto) { 
 cout<< "el numero mayor ingresado es mayor que el numero secreto "<<endl;
 }

 else  {
 cout<<"el numero ingresado es menor que el numeor secreto "<<endl ;
 }

}

