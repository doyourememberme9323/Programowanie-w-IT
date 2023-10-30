#include<iostream>
using namespace std;

int main(){

// ciag znakow(tekst) - string 
// liczby calkowite - int,long, unsigned short  
short a,  b; 
cout << "podaj a: ";
cin >> a;
cout << "podaj b: ";
cin >> b;

// instrukcja warunkowa - if(warunek)
if(a > b){
	cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
}
// = operator przypisania
// == operator porownania
// != rozne od (a != b ) -> czy 4 jest rozne od 5 (tak)
else if(a==b){ // sprawdzenie kolejnego warunku 
   cout << a << " == " << b;
}
else // jezeli zaden z powyrzszywych waronkow sie nie spelni to wykona else (w przeciwnym razie)
cout << a << " < " << b;

}
