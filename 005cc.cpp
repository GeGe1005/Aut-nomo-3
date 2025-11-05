//EJERCICIO 3
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double calcularDiscriminante(double a, double b, double c)//Esto nos ayudara a calcular los valores.
{
    return b * b - 4 * a * c;
}//Con esto resolveremos la ecuación cuadrática.
void resolverEcuacion(double a, double b, double c)
{
    if (a == 0)
    {
        cout<<" El coeficiente 'a' no puede ser cero. No es una ecuacion cuadratica." << endl;
        return;
    }
    double D=calcularDiscriminante(a, b, c);
    cout<<fixed << setprecision(2);//Nos ayuda a controlar como se muestran los números decimales del ejercicio.
    cout<<" Ecuacion: " << a << " x´2 + " << b << " x + " << c << " = 0" << endl;
    cout<<" Discriminante (D) = " << D << endl;
    if (D > 0)
    {
    	   double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << " Dos soluciones reales: " << endl;
        cout << " x1 = " << x1 << endl;
        cout << " x2 = " << x2 << endl;
    }
    else if (D==0)
    {
    	   double x = -b / (2 * a);
        cout << " Una unica solucion real: " << endl;
        cout << " x = " << x << endl;
    }
     else
    {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-D) / (2 * a);//Esto nos explica que la ecuación no tiene soluciones reales, sino una solucion compleja.
        cout<< " Dos soluciones complejas: " << endl;
        cout<< " x1 = "<<parteReal<< " + "<<parteImaginaria<<" i "<<endl;
        cout<< " x2 = "<<parteReal<< " - "<<parteImaginaria<<" i "<<endl;
    }
}
int main()
{
    double a, b, c;
    cout<<" Ingrese los coeficientes de la ecuacion cuadratica ax´2 + bx + c = 0: " << endl;
    cout<<" a: ";
    cin>>a;
    cout<<" b: ";
    cin>>b;
    cout<<" c: ";
    cin>>c;
    resolverEcuacion(a, b, c);
    return 0;
}