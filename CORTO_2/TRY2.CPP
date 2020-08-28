#include <iostream> 

using namespace std;

int main(void){

    float cantidad;
    int n;

    cout << "\nCALCULE EL IVA SEGUN SU PAIS" << endl << endl;

    cout << "PAISES: " << endl << endl;

    cout << "1. El Salvador" << endl;
    cout << "2. Guatemala" << endl;
    cout << "3. Honduras" << endl;
    printf("4. Espa%ca",164); // Se agrega la ñ por medio de la tabla ASCII

    cout << endl;
    cout << "\nDIGITE EL NUMERO CORRESPODIENTE A SU PAIS: ";
    cin >> n;

    if ( n == 1 ){

        cout << "\nSu pais es El Salvador" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad;
        cout.precision(4);
        cout << " usted debe pagar $" << cantidad * 0.13 << " de IVA" << endl << endl;

    }
    else if ( n == 2 ){

        cout << "\nSu pais es Guatemala" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad;
        cout.precision(4);
        cout << " usted debe pagar $" << cantidad * 0.09 << " de IVA" << endl << endl;

    }
     else if ( n == 3 ){

        cout << "\nSu pais es Honduras" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad;
        cout.precision(4);
        cout << " usted debe pagar $" << cantidad * 0.15 << " de IVA" << endl << endl;

    }
     else if ( n == 4 ){

        printf("\nSu pais es Espa%ca",164); // Se agrega la ñ por medio de la tabla ASCII
        cout << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad;
        cout.precision(4);
        cout << " usted debe pagar $" << cantidad * 0.20 << " de IVA" << endl << endl;

    }
    else {

        cout << "\nEl numero que ingreso no esta asignado a ningun pais" << endl << endl;

    }

    return 0;
}