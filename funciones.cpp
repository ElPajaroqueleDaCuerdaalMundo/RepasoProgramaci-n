#include <iostream> // Librería para poder utilizar 'cout' y 'cin' en C++.
using namespace std;

// Prototipos de las funciones (declaran las funciones antes de definirlas).
void imprimir_dos_veces(string nombre);
void decimal_en_entero(float numero);
int devolver_Numero(float numero);
int suma_numeros(int numero1, int numero2);


//-------------------------------------- este es el programa principal-----------------------------
int main() {
    // Llamada a la función 'imprimir_dos_veces' con el nombre "Newton".
    imprimir_dos_veces("Newton");

    // Llamada a la función 'decimal_en_entero' para convertir un número decimal a entero.
    decimal_en_entero(2.5555);

    // Llamada a la función 'devolver_Numero' y se almacena el valor retornado en la variable 'numero_prueba'.
    int numero_prueba = devolver_Numero(2.5656548);

    // Imprime el valor de 'numero_prueba'.
    cout << numero_prueba << endl;

    // Llamada a la función 'suma_numeros' y se imprime el resultado de la suma.
    cout << suma_numeros(5, 7) << endl;

    return 0;  // Fin del programa.
}

// Definición de las funciones--------------------------------------------------------------:

// Esta función imprime dos veces el nombre recibido como parámetro.
void imprimir_dos_veces(string nombre) {
    cout << nombre << endl;  // Imprime el nombre una vez.
    cout << nombre << endl;  // Imprime el nombre otra vez.
}

// Esta función transforma un número tipo 'float' en un entero y lo imprime.
void decimal_en_entero(float numero) {
    int a = static_cast<int>(numero);  // Convierte el número flotante a entero.
    cout << a << endl;  // Imprime el número ya convertido a entero.
}

// Esta función transforma un número tipo 'float' o 'double' en entero y lo retorna.
int devolver_Numero(float numero) {
    int a = static_cast<int>(numero);  // Convierte el número flotante a entero.
    return a;  // Retorna el valor entero.
}

// Esta función suma dos números enteros y retorna el resultado.
int suma_numeros(int numero1, int numero2) {
    int a = numero1 + numero2;  // Suma los dos números.
    return a;  // Retorna el resultado de la suma.
}
