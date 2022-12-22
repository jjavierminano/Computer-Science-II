#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector <int> NumeroVentas (int ventas); //Funcion que lee el vector de datos con el numero de ventas.
void MostrarVector(vector <int> elementosvector); //Funcion que muestra el vector com el numero de ventas.
void ListaNoOrdenada (vector <int> elementosvector); //Funcion que dice cuanto ha vendido cada vendedor
int main()
{
	int venta_dia;
	vector <int> vnumeroventas;
	vnumeroventas = NumeroVentas(venta_dia);
	cout<<endl;
	MostrarVector(vnumeroventas);
	cout<<endl;
	ListaNoOrdenada (vnumeroventas);
	
	
	

}

//-----------------------------------------------------------------------------------
//Funcion que lee el vector de datos.
vector <int> NumeroVentas (int ventas)
{
	vector <int> numeroventas;
	cout<<"introduzca el numero de ventas de cada vendedor, cambie de vendedor introduciendo ''-1'' y finalice introduciendo cualquier numero menor que -1"<<endl;
	cout<<"Introduzca el primer numero de ventas: ";
	cin>>ventas;
	while(ventas>-2)
	{
		numeroventas.push_back(ventas);
		cout<<"introduzca el siguiente numero de ventas: ";
		cin>>ventas;
	}
	numeroventas.push_back(-2);
return numeroventas ;
}

//------------------------------------------------------------------------------------
//Funcion que muestra el vector.
void MostrarVector(vector <int> elementosvector)
{
	for(int i=0; i<elementosvector.size(); i++)
	{
		cout<<elementosvector.at(i)<<" ";
	}
}

//-------------------------------------------------------------------------------------
//Funcion que calcula cuantas ventas ha hecho cada vendedor
void ListaNoOrdenada (vector <int> elementosvector)
{
	int numerovendedor=1;
	int recordarposicion=0;
	int contador=0;
	cout<<endl;
	for(int i=recordarposicion; i<elementosvector.size(); i++)
	{
		if(elementosvector.at(i)>=0)
		{
			contador = contador + elementosvector.at(i);
			
		}
		else
		{
			cout<<"El vendedor "<<numerovendedor<<" ha vendido: "<<contador<<endl;
			numerovendedor++;
			recordarposicion=i+1;
			contador=0;
		}

	}
}







