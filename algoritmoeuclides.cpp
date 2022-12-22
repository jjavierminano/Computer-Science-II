#include <cmath>
#include <iostream>

using namespace std;







int main()
{
	int dividendo, divisor, resto, cociente, mcd, num1, num2;
	cout<<"introduzca los numeros"<<endl;
	cin>>num1>>num2;
	if(num1>num2)
	{
		dividendo=num1;
		divisor=num2;
	}
	else
	{
		dividendo=num2;
		divisor=num1;
	}
	
	do
	{
		cociente=dividendo/divisor;
		resto=dividendo%divisor;
		dividendo=divisor;
		divisor=resto;
	}while(resto>=0);
	mcd=resto;
	cout<<mcd;
}
