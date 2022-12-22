//José Javier Miñano , Javier Osuna. Ejercicio coordenadas geográficas
#include <cmath>
#include <iostream>

using namespace std;

void Grados_GMS ();
void Grados_longitud ();
float funcionaltura (float altura);
int main()
{
	float altura2;
	Grados_GMS();
	Grados_longitud();
	altura2 = funcionaltura(altura2);
	cout<<"está a "<<altura2<<" metros de altura"<<endl;
	
system("pause");
return 0;
}

//Creamos una función que recibe una latitud en formato estándar (grado, min, s, N/S) y devuelve un grado con coma decimal. Si la coordenada es norte, el signo será positivo
void Grados_GMS () 
{
	double grado, minutos, segundos, angulo;
	int minutosenteros;
	int nortesur = 0;
	bool nortesur2 = false;
	cout<<"LATITUD"<<endl;
	cout<<endl;
    cout << "Introduzca un angulo en grados, minutos y segundos" << endl;
    cout<<"¿la posición que va a introducir esta en el norte o en el sur? En caso Norte, introduzca 1. En caso Sur, introduzca 2"<<endl;
    do
    {
    	cout<<"introduzca norte o sur"<<endl;
    	cin>>nortesur;
    	if(nortesur==1||nortesur==2)
    	{
    		nortesur2=true;
		}
	}while(nortesur2==false);

    cout << "Grados: ";
    cin >> grado;

    while (grado<0)
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> grado;
    }
    
    //normalizamos el angulo
    while (grado>=180) 
	{
        grado = grado - 360;
    }
	
	//introducimos los minutos
    cout << "Minutos (tiene que ser menor que 60 y positivo) --> ";
    cin >> minutos;
    while (minutos<0 || minutos>=60)
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> minutos;
    }

	//introducimos los segundos
    cout << "Segundos (tiene que ser menor que 60 y positivo --> ";
    cin >> segundos;
    while (segundos<0 || segundos>=60) 
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> segundos;
    }
    minutos = minutos + segundos/60.0;
    minutosenteros=minutos;
    angulo = grado + minutos/60.0;
    if(nortesur==2)
    {
    	angulo=-angulo;
	}
	if(nortesur==1)
	{
		cout<<"la latitud introducida es: "<<abs(grado)<<"º, "<<minutosenteros<<"', "<<segundos<<"'', "<<"N"<<endl;
	}else
	{
		cout<<"la latitud introducida es: "<<abs(grado)<<"º, "<<minutosenteros<<"', "<<segundos<<"'', "<<"S"<<endl;
	}
    cout << "El angulo resultante es "<< angulo <<endl;
    cout<<endl;
}

//Creamos una función que recibe una longitud en formato estándar (grado, min, s, N/S) y devuelve un grado con coma decimal. Si la coordenada es este, el signo será positivo
void Grados_longitud () 
{
	double grado, minutos, segundos, angulo;
	int minutosenteros;
	int esteoeste = 0;
	bool esteoeste2 = false;
	cout<<"LONGITUD"<<endl;
	cout<<endl;
    cout << "Introduzca un angulo en grados, minutos y segundos" << endl;
    cout<<"¿la posición que va a introducir esta en el Este o en el Oeste? En caso Este, introduzca 1. En caso Oeste, introduzca 2"<<endl;
    do
    {
    	cout<<"introduzca Este u Oeste"<<endl;
    	cin>>esteoeste;
    	if(esteoeste==1||esteoeste==2)
    	{
    		esteoeste2=true;
		}
	}while(esteoeste2==false);

    cout << "Grados: ";
    cin >> grado;

    while (grado<0)
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> grado;
    }
    
    //normalizamos el angulo
    while (grado>=180) 
	{
        grado = grado - 360;
    }
	
	//introducimos los minutos
    cout << "Minutos (tiene que ser menor que 60 y positivo) --> ";
    cin >> minutos;
    while (minutos<0 || minutos>=60)
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> minutos;
    }

	//introducimos los segundos
    cout << "Segundos (tiene que ser menor que 60 y positivo --> ";
    cin >> segundos;
    while (segundos<0 || segundos>=60) 
	{
        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> segundos;
    }
    minutos = minutos + segundos/60.0;
    minutosenteros=minutos;
    angulo = grado + minutos/60.0;
    if(esteoeste==2)
    {
    	angulo=-angulo;
	}
	if(esteoeste==1)
	{
		cout<<"la longitud introducida es: "<<abs(grado)<<"º, "<<minutosenteros<<"', "<<segundos<<"'', "<<"E"<<endl;
	}else
	{
		cout<<"la longitud introducida es: "<<abs(grado)<<"º, "<<minutosenteros<<"', "<<segundos<<"'', "<<"O"<<endl;
	}
    cout << "El angulo resultante es "<< angulo <<endl;
}

float funcionaltura (float altura)
{
	cout<<"introduce la altura: "<<endl;
	cin>>altura;
	return altura;
}











