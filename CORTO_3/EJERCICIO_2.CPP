#include <iostream>

using namespace std;

//Funcion que se encarga de dar pistas al usuario, mostrar intentos restantes y continuar o terminar el juego
bool fnumero(){

    //Declaracion de variable
    int num = 0;
    int intentos = 5;
    int magico = 40;
    bool fin = false;

    //Mientras la variable bool no se convierta en verdadera el bucle continua
    while(fin==false){

        //Se pide un numero al usuario y se almacena
        cout << "\nIngrese un numero: "; 
        cin >> num;

        //Si el usuario ingresa adivina el numero magico aparece un mensaje y el juego termina
        if (num == magico){

            cout << "\nADIVINASTE EL NUMERO MAGICO, FELICIDADES!!!";
            return true;
        }
        //Si el usuario ingresa un numero que es menor al magico y que sea < 101 (El numero limite superior es el 100), se da una pista y continua el juego
        else if(num > magico && num < 101){

            cout << "\nEl numero magico es menor al que ingresaste" << endl;

        }
        //Si el usuario ingresa un numero que es mayor al magico y que sea > 0 (El numero limite inferior es el 1), se da una pista y continua el juego
        else if(num > 0 && num < magico){

            cout << "\nEl numero magico es mayor al que ingresaste" << endl;

        }
        //Si el usuario ingresa el numero cero el juego termina, ya que fue la opcion que se dio en las instrucciones al usuario cuando inicio el programa
        else if (num == 0){

            cout << "\nYa no quieres seguir intentando :(" << endl;
            return true;

        }
        //Si el numero es menor a 1 y mayor que 100 se despliega el siguiente mensaje
        else{
            cout << "\nEl numero no se encuentra en el rango de 1 a 100" << endl;
        }
        //Por cada vez que el ciclo se ejecuta se resta un intento al usuario
        intentos--;

        //Si al usuario le quedan intentos y el juego aun no ha terminado se muestra al usuario la cantidad de intentos que le quedan
        if(intentos > 0 && fin == false){

            cout << "Intentos restantes: " << intentos << endl;

        }else{
        //Si se queda sin intentos el juego termina
            return true;

        }
        
    }

}
//Funciones principal
int main(void){
    //Titulo e instrucciones que el usuario debe conocer
    cout << "\nADIVINA EL NUMERO MAGICO ENTRE 1 Y 100" << endl;
    cout << "Cuentas con 5 intentos";
    cout << " y recuerda que si ya no quieres jugar puedes ingresar el numero 0" << endl;

    //Se manda a llamar a la funcion y se le iguala a true que es cuando el juego termina para mostrar el siguiente mensaje 
    if (fnumero() == true){

        cout << "\nFIN DEL JUEGO" << endl;
    }
    
    cout << endl;
    return 0;
}