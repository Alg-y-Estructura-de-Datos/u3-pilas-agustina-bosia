#include <iostream>
#include "Pila/Pila.h"
using namespace std;


int main(){
    int op;
    string place;
    bool c=1;
    Pila<string> stack;

    while (c)
    {
        cout<<"quiere: 1) entrar a un lugar, 2) salir del lugar, 3) saber la ubicación actual, 4) salir\n";
        cin>>op;

        switch (op){
        case 1:
            cout<<"ingrese el nombre del lugar al que entra: \n";
            cin>>place;
            stack.push(place);
            break;
        case 2:
            cout<<"acaba de salir del "<<stack.pop()<<endl;
            break;
        case 3:
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
