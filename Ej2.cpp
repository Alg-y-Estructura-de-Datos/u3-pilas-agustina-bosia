#include <iostream>
#include "Pila/Pila.h"
using namespace std;
/*Escribir una función Reemplazar que tenga como argumentos una pila con tipo de elemento
int y dos valores int: viejo y nuevo de forma que, si el primer valor (viejo) aparece en algún
lugar de la pila, sea reemplazado por el segundo (nuevo)..
*/

void check(Pila<int>& stack, int numn, int numv, Pila<int>& stack1){
    while(!stack.esVacia()){
        int num=stack.pop();
        if(num==numv){
            stack1.push(numn);
        }
        else{
            stack1.push(num);
        }
    }
    
}


int main() {

    Pila<int> stack,stack1;

    int array[10]={1,2,3,1,2,3,1,2,4,5};

    for(int i=0; i<10;i++){
        stack.push(array[i]);
    }

    check(stack,0,2,stack1);

    while(!stack1.esVacia()){
        cout<<stack1.pop()<<" ";
    }


    return 0;
}
