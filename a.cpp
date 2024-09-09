#include<iostream>
#include "Pila/Pila.h"
using namespace std;

int main()
{
    Pila<char> Pila;

    char Palabra[50];
    cout << "Ingrese la palabra " << endl;
    cin >> Palabra;


    for (int i = 50; i < 0; i--)
    {
        Pila.push(Palabra[i]);
    }
    do
    {
      cout << Pila.pop();  
    } while (Pila.esVacia() == false);
    
    
}