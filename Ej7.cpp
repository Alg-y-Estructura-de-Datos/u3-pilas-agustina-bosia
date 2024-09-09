#include <iostream>
#include "Pila/Pila.h"
using namespace std;

/*
Deshacer Operaciones en un Editor de Texto

        Contexto: Imagina que estás utilizando un editor de texto que tiene una función de
        "deshacer" para revertir los cambios recientes. Cada vez que realizas un cambio en
        el documento, el editor lo guarda para que puedas deshacerlo si es necesario.
        Implementa esta funcionalidad usando una pila.

Enunciado:

Escribe un programa en C++ que simule la funcionalidad de "deshacer" de un editor de texto
 utilizando una pila. Cada vez que el usuario realiza una acción (por ejemplo, escribir una
 palabra, borrar una palabra), se debe apilar esta acción. Cuando el usuario decide "deshacer"
 una acción, se debe desapilar y mostrar cuál fue la última acción realizada.

Entrada:

Serie de acciones como "escribir" o "borrar" seguidas de la palabra correspondiente.
Comando "deshacer" para revertir la última acción.

Salida:

Estado actual del texto después de cada operación.
Acción revertida en cada comando de "deshacer".

Ejemplo: Si el usuario realiza las siguientes acciones:

 Escribir "Hola"
Escribir "Mundo"
Borrar "Mundo"
Deshacer
Deshacer

El programa debería mostrar:

Texto actual: "Hola"

*/

int main(){
     int op,last;
    string place;
    bool c=1;
    Pila<string> stack, aux;
    Pila<int> aux1;

    while (c)
    {
        cout<<"quiere: 1) ingresar una palabra, 2) borrar una palabra, 3) deshacer, 4) imprimir, 5) salir\n";
        cin>>op;

        switch (op){
        case 1:
            cout<<"ingrese la palabra: \n";
            cin>>place;
            stack.push(place);
            aux1.push(1);
            break;
        case 2:
            place= stack.pop();
            aux.push(place);
            cout<<"acaba de borrar: "<<place<<endl;
            aux1.push(2);
            break;
        case 3:
            last=aux1.pop();
            if(last==2){
                stack.push(aux.pop());
            }
            else if(last==1){
                stack.pop();
            }
            else if(aux1.esVacia()){
                cout<<"no hiciste nada antes de esto man\n";
            }
            cout<<endl;
            break;
        case 4:
            while(!stack.esVacia()){
                cout<<stack.pop()<<" ";
            }
            cout<<endl;
            break;
        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    }

    
}