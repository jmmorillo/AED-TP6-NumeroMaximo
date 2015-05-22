/* Dada una serie de numeros ingresada por el usuario, el programa devuelve el mayor de los valores ingresados.
/  Juan Manuel Morillo
/ 18-05-2015
*/

#include <iostream>
using namespace std;

int main(){
	
	int num;
	int maximo=0;

	cout<<"\n\t\t\t\tNUMERO MAXIMO\n";
	cout<<"\n\tIngrese una serie de numeros enteros y positivos (cero para terminar)\n\n\t";
	
	cin>>num;
	
	do{
		if(num>maximo)
		maximo=num;
		cout<<"\n\t";
		cin>>num;
	}while(num!=0);
	
	cout<<"\t_________________________________________\n";
	cout<<"\n\tDe los numeros ingresados, el maximo es "<<maximo<<".\n\n";
}
