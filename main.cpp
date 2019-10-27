/* INTEGRANTES
 * Jennifer Aimee Gean        2590-1314377 
 * Carlos Josué Tirado Garcia 1490-14-4929
 * Erick Roberto Garcia Tovar 1490-14-1612 
 * Adolfo Martin Ajucum Cuá   1490-14-8757
 */

/* 
 * File:   main.cpp
 * Author: LENOVO
 *
 * Created on 27 de octubre de 2019, 10:37 AM
 */

#include <cstdlib>
#include <cstdlib>
#include <stdlib.h>
#include "iostream"

using namespace std;

/*
 * 
 */
void corredores() {
    int contador = 0;
    float v1;
    string nombre;
    for (int i = 0; i <= 10; i++) {
        v1 = rand() % 60;
        cout << "Ingrese nombre: ";
        cin>>nombre;
        if (v1 <= 20) {
            cout << "tiempo: " << v1 << " Resultado: Recibido en el equipo de atletismo ";
            contador++;
        } else {
            cout << "tiempo: " << v1 << " Gracias por participar" << endl;
        }
    }
    cout << "-----------------------------" << endl;
    cout << "Numero de corredores clasificados: " << contador << endl;
}

void materias() {
    string materia;

    float nota, total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese nombre materia: ";
        cin>>materia;
        cout << "Ingrese nota:";
        cin>>nota;
        total = total + nota;
    }
    cout << "El primedio es: " << total / 5;
}

void telas() {
    int op;
    float aux, total;
    string nombre;
    do {
        cout << "Ingrese nombre de la prenda: ";
        cin>>nombre;
        cout << "Ingrese yardas: ";
        cin>> aux;
        total = total + aux;
        cout << "Presione 1 para continuar y 0 para terminar ";
        cin>>op;
    } while (op == 1);
    cout << "-----------------------------" << endl;
    cout << "El total de yardas es: " << total << endl;
}

void facotrial() {
    int n, i;
    long double factorial; // se declara long double para poder representar números grandes
    cout << "Introduce un numero: ";
    cin >> n;
    factorial = 1;
    for (i = 1; i <= n; i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << n << " -> " << factorial << endl;
}

int main(int argc, char** argv) {
    int choice;

    do {


        cout << endl
                << " 1 - Corredores.\n"
                << " 2 - Notas.\n"
                << " 3 - Telas.\n"
                << " 4 - Factorial.\n"
                << " 5 - Salir.\n"
                << " Elije una opcion y presiona enter: ";
        cin >> choice;

        switch (choice) {
            case 1:
                //Ejercicio1
                corredores();
                break;
            case 2:
                //Ejercicio2
                materias();
                break;
            case 3:
                //Ejercicio3
                telas();
                break;
            case 4:
                //Ejercicio 4
                facotrial();
                break;
            case 5:
                cout << "Fin del programa.\n";
                break;
            default:
                cout << "No es una opcion valida. \n"
                        << "Elija de nuevo.\n";
                break;
        }

    } while (choice != 5);
    return 0;
}

