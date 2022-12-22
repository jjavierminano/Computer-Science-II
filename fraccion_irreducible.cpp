//Programa para hacer irreducible una fraccion
#include <iostream>
#include <cmath>

using namespace std;

void Leernumeros (int a, int b);
int MCD (int num1, int num2);
int main()
{
	int numero1, numero2, mcd;
	mcd= MCD(numero1, numero2);
	cout<< mcd;	
}

//-------------------------------------------------------------

//Funcion que calcula el mcd de dos numeros
int MCD (int num1, int num2)
{
	int resto, mcd;
	Leernumeros(num1, num2);
	
	resto=num1%num2;
	while(resto!=0)
	{
		num1 = num2;
		num2 = resto;
		resto=num1%num2;
	}
	mcd=resto;
	return mcd;
}

//-------------------------------------------------------------

//Funcion que lee dos numeros, viendo si es una entrada correcta
void Leernumeros (int a, int b)
{	
	do
	{
	cout<<"introduzca dos numeros enteros"<<endl;
	cin>>a>>b;
	}while(a==b || a==0 || b==0 ||a<b);
	
	if(a<0)
	{
		a=-a;
	}
	if(b<0)
	{
		b=-b;
	}
}

























