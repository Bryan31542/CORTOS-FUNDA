#include <iostream>
#include <string.h>

using namespace std;

//Funcion que codifica una letra y regresa el numuero de acuerdo a la clave
char pclave(char frase[], int longitud, char letra[]){

    int i;
    for (i = 0; i < longitud; i++){ //Ciclo en el que se recorre la palabra

        //Dentro del for se procede a comparar cada caracter con la clave murcielago y a la variable letra se le asgina el numero correspondiente
        if (frase[i] == 'm'){

            letra[i] = '0';
        }
        else if (frase[i] == 'u'){

            letra[i] = '1';
        }
        else if (frase[i] == 'r'){

            letra[i] = '2';
        }
        else if (frase[i] == 'c'){

            letra[i] = '3';
        }
        else if (frase[i] == 'i'){

            letra[i] = '4';
        }
        else if (frase[i] == 'e'){

            letra[i] = '5';
        }
        else if (frase[i] == 'l'){

            letra[i] = '6';
        }
        else if (frase[i] == 'a'){

            letra[i] = '7';
        }
        else if (frase[i] == 'g'){

            letra[i] = '8';
        }
        else if (frase[i] == 'o'){

            letra[i] = '9';
        }
        else{ 

            letra[i] = frase[i]; //Si al comparar cada caracter uno de ellos no corresponde a ninguna letra de la clave, se regresa el caracter sin aplicar cambios
        }
    
    }

    return letra[i]; //La funcion regresa el caracter
}

int main(){

    cout <<"\nCODIFIQUE UNA FRASE EN CLAVE MURCIELAGO" << endl << endl;

    char frase[100]; //Array donde se almacena la frase
    char letra[100]; //Array donde se almancea la letra regresada por la funcion

    cout << "Ingrese la frase a codificar: ";
    gets(frase);

    int longitud = strlen(frase); // Se mide la longitud de la frase ingresada

    cout << "\nSu frase codificada es: ";

    int i;

    for (i = 0; i < longitud; i++){ //Se crea un for que recorrera la longitud de la frase

        pclave(frase, longitud, letra); //Se manda a llamar a la funcion previamente creada 
        cout << letra[i]; // Se imprime la variable letra tomando el valor de i
    
    }

    return 0;
}