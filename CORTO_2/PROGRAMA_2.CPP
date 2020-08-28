#include <iostream> 

using namespace std;

int main(void){

    float cantidad;
    string pais;

    cout << "\nCALCULE EL IVA SEGUN SU PAIS" << endl << endl;

    cout << "PAISES: " << endl << endl;

    cout << "El Salvador" << endl;
    cout << "Guatemala" << endl;
    cout << "Honduras" << endl;
    printf("Espa%ca",164); // Se agrega la ñ por medio de la tabla ASCII

    cout << endl;
    cout << "\nDIGITE SU PAIS: ";
    getline(cin, pais);

    if ( pais == "El Salvador" ){

        cout << "\nSu pais es El Salvador" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad << " usted debe pagar $" << cantidad * 0.13 << " de IVA" << endl << endl;

    }
    else if ( pais == "Guatemala" ){

        cout << "\nSu pais es Guatemala" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad << " usted debe pagar $" << cantidad * 0.09 << " de IVA" << endl << endl;

    }
     else if ( pais == "Honduras" ){

        cout << "\nSu pais es Honduras" << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad << " usted debe pagar $" << cantidad * 0.15 << " de IVA" << endl << endl;

    }
     else if ( pais == "Espa%ca",164 ){ // Se agrega la ñ por medio de la tabla ASCII

        printf("\nSu pais es Espa%ca",164); // Se agrega la ñ por medio de la tabla ASCII
        cout << endl;
        cout << "Ingrese la cantidad de dinero a la que desea calcular el IVA: ";
        cin >> cantidad;
        cout << "\nPor $" << cantidad << " usted debe pagar $" << cantidad * 0.20 << " de IVA" << endl << endl;

    }
    else {

        cout << "\nEl pais que digito no se encuentra en la lista" << endl << endl;

    }

    return 0;
}