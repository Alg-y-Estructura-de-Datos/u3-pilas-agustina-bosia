#include <iostream>
#include "Pila/Pila.h"
using namespace std;
/*
Crear una función que reciba una pila por referencia y un número. La función debe sacar la
primera ocurrencia de dicho valor de la pila sino se repite el valor en la pila, de lo contrario
debe eliminar todos los valores repetidos a excepción de la primera ocurrencia. Si el valor no
se encuentra en la pila muestra un mensaje indicando que no pertenece a la pila. Imprimir la
pila al final para verificar si hubo o no modificaciones.
*/

int contar(Pila<int> stack, int num){
    int contador=0;
    while(!stack.esVacia()){
        int num1=stack.pop();
        if(num1==num) {
            contador++;
        }
    }
    return contador;
}

void sacar(Pila<int>& stack,Pila<int>& stack1, int num){
    int cont=contar(stack,num);
    if (cont==0){
        cout << "no está el número en la pila" << endl;
    }
    else if(cont==1){
        while(!stack.esVacia()){
            int nume=stack.pop();
            if(nume==num){

            }
            else {
                stack1.push(nume);
            }
        }
    }
    else{
        int count=0;
        while(!stack.esVacia()){
            int nume=stack.pop();
            if(count>0){
                if (nume==num){

                }
                else {
                    stack1.push(num);
                }
            }
            else if (count==0){
                stack1.push(num);
                if (nume==num){
                count++;
                }
            }
            
        }
    }

}


int main() {

    Pila<int> stack,aux;

    int array[10]={1,2,3,1,2,3,1,2,4,5};

    for(int i=0; i<10;i++){
        stack.push(array[i]);
    }


    sacar(stack,aux,2);

    while(!aux.esVacia()){
        cout<<aux.pop()<<" ";
    }
    

    return 0;
}
