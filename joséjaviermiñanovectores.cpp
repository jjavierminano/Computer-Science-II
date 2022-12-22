#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// creamos una funcion que pida el tamaño del vector

int obtener_dimension(); //funcion que pide la dimension al usuario y comprueba si es correcta.
vector <double> obtener_valores_vector (int dim); //funcion que rellena el vector
double media_aritmetica (int dimension_correcta, vector<double> datos); //funcion que calcula la media aritmetica
double desviacion_media(double media_aritmetica, int dimension_vector, vector <double> usuario); //funcion que calcula la desviacion media
double varianza_correcta(double media_aritmetica, int dimension_vector, vector <double> usuario); //funcion que calcula la varianza
int main()
{
int dimension_correcta;
double media;
double desviacion_med;
double varianza;
cout<<"Calculamos media, desviación media y covarianza de un conjunto de datos mayores que 0"<<endl;
cout<<"indique el numero de datos, teniendo en cuenta que como mínimo debe haber 2 y como máximo 20"<<endl;

dimension_correcta = obtener_dimension();

vector <double> datos(dimension_correcta);
datos= obtener_valores_vector (dimension_correcta);
media = media_aritmetica (dimension_correcta, datos);
cout<<"la media de todos los datos es: "<<media<<endl;
desviacion_med = desviacion_media(media, dimension_correcta, datos);
cout<<"la desviacion media de los datos es: "<<desviacion_med<<endl;
varianza = varianza_correcta(media, dimension_correcta,datos);
cout<<"la varianza de los datos es: "<<varianza<<endl;
system("pause");
return 0;
}

//funcion que pide al usuario la dimension del vector.
int obtener_dimension()
{
	int dimension;	
	do
	{
		cout<<"introduzca la dimension del vector: ";
		cin>>dimension;
	}while(dimension<2 || dimension>20);
	
}

//funcion que introduce los valores del vector.
vector <double> obtener_valores_vector (int dim)
{
	vector <double> vec(dim);
	cout << "Introduce los datos que desea analizar" << endl;
    for (int i=0; i <dim; i++)
	{
        cout << "La poscion " << i << " toma valor: ";
        cin >> vec[i];
        cout<<endl;
    }
    return vec;
}

//funcion que calcula la media de los datos introducidos en el vector.
double media_aritmetica (int dimension_vector, vector<double> usuario)
{
	double media = 0;
	double sumatorio = 0;
	for(int i=0; i<dimension_vector; i++)
	{
		sumatorio=sumatorio+usuario[i];
	}
	media=sumatorio/dimension_vector;
	return media;
}

//funcion que calcula la desviación media
double desviacion_media(double media_aritmetica, int dimension_vector, vector <double> usuario)
{
	double desviacion;
	double sumatorio_diferencias = 0;
	for(int i=0; i<dimension_vector; i++)
	{
		sumatorio_diferencias=sumatorio_diferencias+abs(usuario[i]-media_aritmetica);
	}
	desviacion = sumatorio_diferencias/dimension_vector;
	return desviacion;
}

//funcion que calcula la varianza
double varianza_correcta(double media_aritmetica, int dimension_vector, vector <double> usuario)
{
	double varianza=0;
	double sumatorio_diferencias = 0;
	for(int i=0; i<dimension_vector; i++)
	{
		sumatorio_diferencias=sumatorio_diferencias+(usuario[i]-media_aritmetica)*(usuario[i]-media_aritmetica);
	}
	varianza = sumatorio_diferencias/dimension_vector;
	return varianza;
}



