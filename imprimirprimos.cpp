//programa que escribe todos los numeros primos hasta un entero dado.
//Necesitamos dos funciones, una que identifique si un numero es entero o no, y otra que lo imprima en pantalla
#include <iostream>
#include <cmath>

using namespace std;
int LeerEntero(); //funcion que lee un valor introducido por pantalla
bool EsPrimo(int numero);
int main()
{
	int n;
	int contador=0;
	n = LeerEntero();
	
	for(int numero=2; numero<=n; numero++)
	{
		if(EsPrimo(numero))
		{
			contador++;
			cout<<numero<<"  "<<contador<<endl;
		}
	}
}

//--------------------------------------------------------

int LeerEntero()
{
	int valor;
	cout<<"introducir valor para obtener los primos menores a él"<<endl;
	
	while(valor<=1)
	{
		cout<<"valor incorrecto, indique otro mayor que 1"<<endl;
		cin>>valor;
	}
	return valor;
}

//---------------------------------------------------------

bool EsPrimo(int numero)
{
	int raiz = sqrt(numero);
	bool esprimo = true;
	
	for(int i=2; i<=raiz;i++)
	{
		if(numero%i==0)
		{
			esprimo=false;
		}
	}
return esprimo;
}















