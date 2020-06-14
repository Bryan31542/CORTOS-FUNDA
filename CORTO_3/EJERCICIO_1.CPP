#include <iostream>

using namespace std;

//Funcion para calcular el salario
void fsalario(int nempleados){
    
    //Se ejecutara el bucle siempre y cuando i sea menor que el numero de empleados que el usuario escribio
    for(int i = 0; i < nempleados; i++){
        
        //Variable para horas trabajadas, pide al usuario que ingrese el dato y se almacena en la variable creada
        float htrabajadas = 0;
        cout << "\nHoras trabajadas en el mes por el empleado: ";
        cin >> htrabajadas;

        //Se multiplican las horas trabajadas por 1.75 que es el valor al que se pagan y se asignan a la var horanormal
        float horanormal = htrabajadas * 1.75;

        //Variable para horas extras, pide al usuario que ingrese el dato y se almacena en la variable creada
        float hextras = 0;
        cout << "Horas extras trabajadas en el mes del empleado: ";
        cin >> hextras;

        //Se multiplican las horas extras por 1.75 que es el valor al que se pagan y se asignan a la var horanormal
        float horaextra = hextras * 2.50;

        //Se crean las variables para el salario real y el total
        float salariototal = 0, salarioreal = 0;
        
        //Al salario real se le asigna la suma de las horas normales y las horas extras 
        salariototal = horanormal + horaextra;

        //A la variable seguro se le asigna el salario total y se multiplica por el 4%
        float seguro = salariototal * 0.04;
        //A la variable afp se le asigna el salario total y se multiplica por el 6.25%
        float afp = salariototal * 0.0625;

        //Al salario real se le asigna la resta del seguro y el afp que serian los descuentos
        salarioreal = salariototal - seguro - afp;

        //Se crea una condicional ya que si el salario es mayor a 500 se descuenta tambien la renta
        if (salariototal > 500){

            //Se crea la var renta que equivale al 10%
            float renta = 0.10;
            //A la var salariorenta se le asigna la multiplicacion del salario total por la renta
            float salariorenta = salariototal * renta; // se aplica a salario mayor de 500
            //Al salario real previamente calculado se le resta la resta
            salarioreal = salarioreal - salariorenta;

            //Se imprime el salario total y el salario real
            cout << "\nEl salario total es: " << salariototal << " dolares";
            cout << "\nEl salario real es: " << salarioreal << " dolares" << endl << endl;

        }
        else{
            //Si el salario no es mayor a 500 se imprime el salario total y el salario real sin descontar la renta
            cout << "\nEl salario total es: " << salariototal << " dolares";
            cout << "\nEl salario real es: " << salarioreal << " dolares" << endl << endl;
        }        
    //En caso de que el usuario haya ingresado mas de un empleado aparacera en siguiente texto, de lo contrario no
    if (i <(nempleados -1)){
        cout << "CONTINUE CON EL SIGUIENTE EMPLEADO" << endl;
        }
        //Se imprime el pantalla el siguiente mensaje cuando ya no hay empleados a los que calcular el salario
       else{
           cout << "HA TERMINADO DE CALCULAR EL SALARIO DE SUS EMPLEADOS" << endl;
       }
    }
}
//Funcion principal
int main(){

    //Titulo del programa
    cout << "\nCALCULE El SALARIO MENSUAL DE LOS EMPLEADOS DE UNA EMPRESA" << endl << endl;

    //Se crea una variable para el numero de empleados, y se pide al usuario que ingrese un dato para ser almacenado
    int nempleados = 0;
        cout << "Digite la cantidad de empleados a la que desea calcular su salario: ";
        cin >> nempleados;
        //Se manda a la funcion que se creo para calcular el salario
        fsalario(nempleados);
    
    return 0;
}