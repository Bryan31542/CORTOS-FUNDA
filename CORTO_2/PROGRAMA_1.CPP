#include <iostream>

using namespace std;

int main(void){

    int c1 = 500 , c2 = 0, c3 = 40, c4 = 20, c5 = 1500, n = 0;

    cout << "\nELIJA UN COLOR Y GANE DINERO!!!" << endl << endl;

    cout << "OPCIONES: " << endl << endl;

    cout << "1. Verde" << endl;
    cout << "2. Azul" << endl;
    cout << "3. Anaranjado" << endl;
    cout << "4. Rojo" << endl;
    cout << "5. Negro" << endl << endl;

    cout << "DIGITE EL NUMERO DE SU COLOR: ";
    cin >> n;

    if ( n == 1 ){

        cout << "\nUsted escogio el color verde y gano $" << c1 << " dolares" << endl << endl;
        cout << "FELICIDADES!!!" << endl << endl;
    }
    else if ( n == 2 ){

        cout << "\nUsted escogio el color azul y gano $" << c2 << " dolares" << endl << endl;
        cout << "GRACIAS POR PARTICIPAR" << endl << endl;
    }
    else if ( n == 3 ){
        
        cout << "\nUsted escogio el color anaranjado y gano $" << c3 << " dolares" << endl << endl;
        cout << "FELICIDADES!!!" << endl << endl;
    }
    else if ( n == 4 ){

        cout << "\nUsted escogio el color rojo y gano $" << c4 << " dolares" << endl << endl;
        cout << "FELICIDADES!!!" << endl << endl;
    }
    else if ( n == 5 ) {

        cout << "\nUsted escogio el color negro y gano $" << c5 << " dolares" << endl << endl;
        cout << "FELICIDADES USTED GANO EL PREMIO MAYOR!!!" << endl << endl;
    }
    else {

        cout << "\nEl numero que ingreso no esta asignado a ningun color" << endl << endl;

    }
    return 0;
}