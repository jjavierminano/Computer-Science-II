//programa que calcula la solucion de una ecuacion
#include <cmath>
#include <iostream>

using namespace std;

double Funcion (double valorx);
double Mediatriz (double izq, double der, double prec);
void Resultados (double a, double b, double res, double prec);
void LeerIntervalo(double& v1, double& v2);

int main()
{
	double izquierda, derecha;
	double precision=0;
	LeerIntervalo(izquierda, derecha);
	
	//introducimos la precision
	do
	{
		cout<<"introduzca la precision:"<<endl;
		cin>> precision;
	}while(precision>=(derecha-izquierda));
	
	if(Funcion(izquierda)*Funcion(derecha)<0)
	{
		Resultados(izquierda, derecha, Mediatriz(izquierda,derecha,precision), precision);
	}
	else
	{
		cout<<"No existe una solucion en este intervalo"<<endl;
	}
}

//---------------------------------------------------------

//funcion que evalua 5x^3+3x-1
double Funcion (double x)
{
	return 5*x*x*x+3*x-1;
}

//---------------------------------------------------------

//funcion que divide en dos el intervalo
double Mediatriz (double izq, double der, double prec)
{
	double centro;
	while(der-izq>prec)
	{
		centro = (der+izq)/2;
		if(Funcion(izq)*Funcion(centro)<=0)
		{
			der = centro;
		}
		else
		{
			izq = centro;
		}
	}
	return (der+izq)/2;
}

//----------------------------------------------------------

//funcion que devuelve los datos y los resultados juntos
void Resultados (double a, double b, double res, double prec)
{
	cout<<"Intervalo: "<<"[ "<<a<<", "<<b<<" ]"<<endl;
	cout<<"Precision: "<<prec<<endl;
	cout<<"Resultado: "<<res<<" con un margen de error de: (+"<<prec<<", -"<<prec<<")"<<endl;
}


//----------------------------------------------------------

//funcion que lee el intervalo y en caso de estar mal introducido lo cambia
void LeerIntervalo(double& v1, double& v2)
{
	double aux;
	do
	{
		cout<<"introduzca los extremos del intervalo"<<endl;
		cin>>v1>>v2;
		if(v1>v2)
		{
			aux=v1;
			v1=v2;
			v2=aux;
		}
	}while(v1==v2);
}



























