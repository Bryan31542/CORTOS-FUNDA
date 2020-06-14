#include <iostream>

using namespace std;

//Funcion que calcula si un año es bisiesto o no
void fbisiesto(int year){

    //Si el año es divisible entre 400 es bisiesto
    if (year % 400 == 0){

        printf("\nEl a%co es bisiesto",164); //Se añade la ñ por medio de la tabla ASCII
        cout << endl;
    }
    //Si el año es divisible entre 4 pero no entre 100 tambien es bisiesto
    else if ((year % 4 == 0 && year % 100  != 0)){

        printf("\nEl a%co es bisiesto",164); //Se añade la ñ por medio de la tabla ASCII
        cout << endl;
    }
    //Si el año no cumple las condiciones anteriores no es bisiesto
    else {

        printf("\nEl a%co no es bisiesto",164); //Se añade la ñ por medio de la tabla ASCII
        cout << endl;
    }

}
//Funcion principal
int main(){

    //Titulo
    printf("\nQUIERES SABER SI UN A%cO ES BISIESTO?",165); //Se añade la Ñ por medio de la tabla ASCII
    cout << endl;
    //Declaracion de variable
    int year;

    //Se pide un dato al usuario y se almacena
    printf("\nIngrese el a%co a verificar: ",164); //Se añade la ñ por medio de la tabla ASCII
    cin >> year;

    //Se manda a llamar a la funcion fbisiesto
    fbisiesto(year);

    return 0;
}