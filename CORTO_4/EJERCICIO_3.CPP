#include <iostream>

using namespace std;

//Funcion que llena la matriz
void llenarmatriz(float matriz[][5], int notas, int alumnos){

    for (int i = 0; i < alumnos; i++){ //For que recorre las filas
        int num = 1;
        for (int j = 0; j < notas; j++){ //For que recorre las columnas
           
            cout << "Digite la nota numero " << num++ << ": ";
            cin >> matriz[i][j];
        }
        if (i <(alumnos - 1)){
          //Si hay alumnos restante se despliega el siguiente mensaje
        cout << "\nCONTINUE CON EL SIGUIENTE ALUMNO" << endl << endl; 
        }
       else{
          //Si ya no hay alumnos se despliega el siguiente mensaje
           cout << "\nHA TERMINADO DE INGRESAR LAS NOTAS DE SUS ALUMNOS" << endl;
       }
    }
}

// Solo es necesario especificar el tamaño de las columnas en la matriz 
void notafinal(float matriz[][5], int notas, int alumnos){

    float promedio = 0;
    int i, j, cont = 1;
    for (i = 0; i < alumnos; i++){
      promedio = 0; //Se inicializa en 0 el promedio para cada estudiante
      for (j = 0; j < notas; j++){
        promedio += matriz[i][j]*0.2; //Multiplicamos cada nota por 0.2 (ya que cada una vale 20%)
      }  
      cout << "\nLa nota final del alumno " << cont << " es: " << promedio << endl; //Se imprime el promedio

      //Condicion que calcula si un alumno reprobo o no
      if (promedio >= 6){
        cout << "El alumno " << cont <<" esta aprobado" << endl;
      }else{
        cout << "El alumno " << cont <<" esta reprobado" << endl;
      }
      cont++; //Aumentamos el contador, ya que calcularemos el promedio de otro alumno
      //Se repetira el proceso para cada uno de los estudiantes
    } 

}
int main(){

    cout << "\nCALCULE LA NOTA FINAL DE N ESTUDIANTES Y VERIFIQUE SI APROBO O NO" << endl << endl;

    int alumnos, notas = 5;
    cout << "Ingrese la cantidad de alumnos a verificar: ";
    cin >> alumnos; //La cantidad de alumnos corresponde a la cantidad de filas de la matriz
    cout << endl;

    // la matriz tiene n filas, 5 columnas
    float matriz[alumnos][5];

    llenarmatriz(matriz, notas, alumnos); //Se manda a llamar a la funcion que llena la matriz

    notafinal(matriz, notas, alumnos); //Se manda a llamar a la funcion que calcula la nota final y despliega si el alumno aprobo o no
}