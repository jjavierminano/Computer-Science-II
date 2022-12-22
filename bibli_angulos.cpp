#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265358;

//Funcion que convierte radianes en grados
double Grados (double rad) {

    double grados;

    grados = (rad*180)/PI;

    return grados;
}

//Funcion que convierte grados en radiandes
double Radianes (double grados) {

    double rad;

    rad = (grados*PI)/180;

    return rad;
}

//Funcion que determina que el valor dado por teclado este en [-180,180]
double Rango (double num) {


    while (num<=-180) {

        num = num + 360;
    }

    while (num>=180) {

        num = num - 360;
    }

    return num;
}

//Esta funcion pasa de angulos a minutos y segundos
void GMS (double angulo) {

    //Definimos dos variables, una recoge la parte entera del numero introducido por teclado declarandolo como un entero y diviendolo entre uno
    //ya que lo trunca. Despues, mediante otra variable recogemos la diferencia entre la parte entera y el numero inicial para recoger la parte decimal
    int parte_entera;
    double parte_decimal;
    parte_entera = angulo/1;
    parte_decimal = angulo - parte_entera;

//Recogemos los grados en otra variable para almacenarlos, calculamos los minutos y repetimos el proceso
    double m,grd;
    grd = parte_entera;
    m = parte_decimal*60;

    parte_entera = m/1;
    parte_decimal = m - parte_entera;
    m = parte_entera;

    double s;
    s = parte_decimal*60;


    cout << angulo << " = " << grd << " grados " << m << " minutos " << s << " segundos" << endl;

}

//Esta funcion pasa de grados, minutos y segundos a simplemente grados
void Grados_GMS () {

    cout << "Introduzca un angulo en grados, minutos y segundos" << endl;

    cout << "Grados (positivo) --> ";
    double grado;
    cin >> grado;

    while (grado<0) {

        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> grado;
    }

    cout << "Minutos (tiene que ser menor que 60 y positivo) --> ";
    double minutos;
    cin >> minutos;

    while (minutos<0 || minutos>=60) {

        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> minutos;

    }

    cout << "Segundos (tiene que ser menor que 60 y positivo --> ";
    double segundos;
    cin >> segundos;

    while (segundos<0 || segundos>=60) {

        cout << "Numero incorrecto, escribalo de nuevo --> ";
        cin >> segundos;

    }

    double angulo;
    minutos = minutos + segundos/60.0;
    angulo = grado + minutos/60.0;


    cout << "El angulo resultante es " << angulo;
}


int main()
{

    cout << "Este programa convierte grados a radianes" << endl;
    cout << "Introduzca el angulo --> ";
    double numero, radian;
    cin >> numero;
    radian = Radianes (numero);
    cout << "El angulo introducido es " << numero << ", en radianes " << radian << endl;

    numero = Rango (numero);
    radian = Radianes (numero);

    cout << "El angulo normalizado es " << numero << ", en radianes " << radian << endl;

    cout << "Introduzca un angulo de nuevo pasa pasarlo a grados, minutos y segundos --> ";
    double angulo;
    cin >> angulo;

    GMS(angulo);

    Grados_GMS();

    return 0;
}
