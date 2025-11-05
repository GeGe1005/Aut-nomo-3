//Ejercicio 1
#include <iostream>
#include <vector>//Nos ayuda en guardar notas.
#include <cctype>//Nos ayuda a convertrir letras a minusculas.
using namespace std;
float calcularPromedio(vector<int> notas)
{
    if(notas.empty()) return 0;//Nos permite evita dividir entre cero.
    int suma = 0;
    for(int nota : notas)
    {
        suma += nota;
    }
    return (float)suma / notas.size();//Nos ayuda a comvertir el flotante permitiendonos una division con desimales.
    }
float calcularPromedio(vector<float> notas)
{
    if (notas.empty()) return 0;
    float suma = 0;
    for(float nota : notas) {
        suma += nota;
    }
    return suma / notas.size();
}

int main()
{
    vector<int> notasEnteras;
    vector<float> notasFlotantes;
    int opcionTipo;
    string continuar;
    cout << "  SISTEMA DE CALCULO DE PROMEDIO DE NOTAS ";
    do
    {
        cout << " Seleccione el tipo de nota a ingresar: ";
        cout << " 1. Nota entera (ejemplo: 85) ";
        cout << " 2. Nota decimal (ejemplo: 85.5) ";
        cout << " Opcion: ";
        cin >> opcionTipo;
        if (opcionTipo == 1)
        {
            int nota;
            cout << " Ingrese la nota entera (0-100): ";
            cin >> nota;

            if(nota >= 0 && nota <= 100)
            {
                notasEnteras.push_back(nota);//Nos ayuda a agregar una nueva nota al final del vector.
                cout << " Nota " << nota << " agregada correctamente. ";
            }
            else
            {
                cout << " Nota invalida. Debe estar entre 0 y 100. ";
            }
        }
        else if(opcionTipo == 2)
        {
            float nota;
            cout << " Ingrese la nota decimal (0.0-100.0): ";
            cin >> nota;

            if(nota >= 0.0 && nota <= 100.0)
            {
                notasFlotantes.push_back(nota);
                cout << " Nota " << nota << " agregada correctamente. ";
            }
            else
            {
                cout << " Nota invalida. Debe estar entre 0.0 y 100.0. ";
            }
        }
        else
        {
            cout << " Opcion invalida. Seleccione 1 o 2. ";
        }
        cout << " Desea ingresar otra nota? (si/no): ";
        cin >> continuar;
    } while (tolower(continuar[0]) == 's'); // si empieza con 's', sigue
    cout << " RESULTADOS ";
    if(!notasEnteras.empty())
    {
        cout << " Notas enteras ingresadas: ";
        for(int nota : notasEnteras)
        cout << nota << " ";
        cout << " Promedio de notas enteras: " << calcularPromedio(notasEnteras) << endl;
    }
    if(!notasFlotantes.empty())
    {
        cout << " Notas decimales ingresadas: ";
        for(float nota : notasFlotantes)
        cout << nota << " ";
        cout << " Promedio de notas decimales: " << calcularPromedio(notasFlotantes) << endl;
    }
    if(notasEnteras.empty() && notasFlotantes.empty())
    {
        cout << " No se ingresaron notas. ";
    }
    cout << " Gracias por usar el sistema. Hasta luego! ";
    return 0;
}
