#include <iostream>
#include <string.h>

using namespace std; 

//Funcion que calcula la media/promedio de estaturas
int apromedio(float estaturas[], int promedio, int longitud){

    float suma = 0;

    for (int i = 0; i < longitud; i++){ //Se crea un for en cual recorrera el array

        int numero = estaturas[i]; //la estatura se ira almacenado en la var numero
        suma += numero; //Para luego almacenarla en la suma

    }

    promedio = suma / longitud;

    return promedio; //Se retorna el promedio luego de haber sido calculado
}

//Funcion que compara las estaturas y cuentas cuantas estan arriba o abajo de la media
void compararestaturas(int arriba, int abajo, float estaturas[], int promedio){

    arriba = 0;
    abajo = 0;

    for (int i = 0; i < 25; i++){
        
        //Dentro de un for que recorre el array se crea una condicion

        if (estaturas[i] < promedio){

            abajo++;    //En caso de que la estatura sea menor que el promedio la variable abajo ira incrementando

        }
        if (estaturas[i] > promedio){
            
            arriba++;   //En caso de que la estatura sea mayor que el promedio la variable arriba ira incrementando
        
        }
    }
    //Se imprimen la variable abajo y arriba con los valores que previamente tomaron
    cout << endl << endl;
    cout << abajo << " alumnos estan debajo de la media";
    cout << endl;
    cout << arriba << " alumnos estan arriba de la media";
}

int main(){

    cout << "\nCalcule el promedio de la estatura de una clase de 25 alumnos"<< endl;
    cout << "Usted debera ingresar la estatura en centimetros" << endl << endl;

    int n = 0;
    float estaturas[25];

    for (int i = 0; i < 25; i++){ //For que se crea para rellenar el array con las estaturas de los 25 estudiantes

        n++;
        cout << "Ingrese la estatura del alumno " << n << ": ";
        cin >> estaturas[i]; //Cada estatura se va almacenando en el array
    }

    int longitud = sizeof(estaturas)/sizeof(25); // Se calcula la longitud de array para usarlo posteriormente

    int promedio = apromedio(estaturas, promedio, longitud); // Se manda a llamar a la funcion que calcula el promedio de estaturas

    cout << "\nEl promedio de estaturas es: " << promedio << " cm";

    int arriba, abajo;

    compararestaturas(arriba, abajo, estaturas, promedio); //Se manda a llamar a la funcion que compara las estaturas e indica cuantas estan arriba o debajo de la media

    return 0;
}