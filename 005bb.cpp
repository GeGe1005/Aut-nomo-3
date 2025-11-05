//EJERCICIO 2
#include <iostream>
#include <cmath>
using namespace std;
void calcularMonedas(double cantidad)//Nos ayuda a convertir la cantidad a centavos.
{
    int totalCentavos = round(cantidad * 100);//Esstas con las denominaciones en centavos.
    const int DOLAR = 100;
    const int CINCUENTA = 50;
    const int VEINTICINCO = 25;
    const int DIEZ = 10;
    const int CINCO = 5;
    const int UNO = 1;
    int monedasDolar = totalCentavos / DOLAR;//Son los valores para calcular el volor ingresado.
    totalCentavos %= DOLAR;//Nos ayuda a actulizar los valores y cambiarlos independientemente de la cantidad.
    int monedasCincuenta = totalCentavos / CINCUENTA;
    totalCentavos %= CINCUENTA;
    int monedasVeinticinco = totalCentavos / VEINTICINCO;
    totalCentavos %= VEINTICINCO;
    int monedasDiez = totalCentavos / DIEZ;
    totalCentavos %= DIEZ;
    int monedasCinco = totalCentavos / CINCO;
    totalCentavos %= CINCO;
    int monedasUno = totalCentavos;
    cout << " DESGLOSE DE MONEDAS:" << endl;
    cout << " Monedas de 1 dólar: " << monedasDolar << endl;
    cout << " Monedas de 50 centavos: " << monedasCincuenta << endl;
    cout << " Monedas de 25 centavos: " << monedasVeinticinco << endl;
    cout << " Monedas de 10 centavos: " << monedasDiez << endl;
    cout << " Monedas de 5 centavos: " << monedasCinco << endl;
    cout << " Monedas de 1 centavo: " << monedasUno << endl;
}
void calcularMonedas(int cantidadCentavos)
{
    double cantidadDolares = cantidadCentavos / 100.0;
    cout << "Cantidad ingresada: $" << cantidadDolares << " (" << cantidadCentavos << " centavos)" << endl;
    calcularMonedas(cantidadDolares);
}
int main()
{
    int opcion;
    double cantidad;
    int cantidadCentavos;
    cout << " CONVERSOR DE DINERO A MONEDAS" << endl;
    do
    {
        cout << " Seleccione el tipo de entrada:" << endl;
        cout << " 1. Ingresar cantidad en dólares (ej: 12.75)" << endl;
        cout << " 2. Ingresar cantidad en centavos (ej: 1275)" << endl;
        cout << " 3. Salir" << endl;
        cout << " Opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Ingrese la cantidad en dólares: $";
                cin >> cantidad;
                if(cantidad >= 0) {
                    cout << "\nCantidad ingresada: $" << cantidad << endl;
                    calcularMonedas(cantidad);
                } else {
                    cout << "Error: La cantidad no puede ser negativa." << endl;
                }
                break;
            case 2:
                cout << "Ingrese la cantidad en centavos: ";
                cin >> cantidadCentavos;
                if(cantidadCentavos >= 0) {
                    calcularMonedas(cantidadCentavos);
                } else {
                    cout << "Error: La cantidad no puede ser negativa." << endl;
                }
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while(opcion != 3);
    return 0;
}