//EJERCICIO 4
#include <iostream>
using namespace std;
void convertirUnidades(int num)
{//Los datos para convertir en unidades.
    if(num == 1)cout<<" uno ";
    else if(num == 2)cout<<" dos ";
    else if(num == 3)cout<<" tres ";
    else if(num == 4)cout<<" cuatro ";
    else if(num == 5)cout<<" cinco ";
    else if(num == 6)cout<<" seis ";
    else if(num == 7)cout<<" siete ";
    else if(num == 8)cout<<" ocho ";
    else if(num == 9)cout<<" nueve ";
}//Los datos para convertir en decenas.
void convertirDecenas(int num)
{
    int decena = num / 10;
    int unidad = num % 10;
    if(decena == 1)
    {
        if(unidad == 0) cout<<" diez ";
        else if(unidad == 1)cout<<" once ";
        else if(unidad == 2)cout<<" doce ";
        else if(unidad == 3)cout<<" trece ";
        else if(unidad == 4)cout<<" catorce ";
        else if(unidad == 5)cout<<" quince ";
        else if(unidad == 6)cout<<" dieciseis ";
        else if(unidad == 7)cout<<" diecisiet e";
        else if(unidad == 8)cout<<" dieciocho ";
        else if(unidad == 9)cout<<" diecinueve ";
    }
    else if(decena == 2)
    {
        if(unidad == 0)cout<<" veinte ";
        else
	   {
            cout<<" veinti ";
            convertirUnidades(unidad);
        }
    }
    else if (decena == 3)
    {
        if (unidad == 0)cout<<" treinta ";
        else {
            cout << " treinta y ";
            convertirUnidades(unidad);
        }
    }
    else if(decena == 4)
    {
        if(unidad == 0)cout<<" cuarenta ";
        else
	   {
            cout << " cuarenta y ";
            convertirUnidades(unidad);
        }
    }
    else if(decena == 5)
    {
        if(unidad == 0)cout<<" cincuenta ";
        else
	   {
            cout<<" cincuenta y ";
            convertirUnidades(unidad);
        }
    } else if(decena == 6)
    {
        if(unidad == 0)cout<<" sesenta ";
        else
	   {
            cout<<" sesenta y ";
            convertirUnidades(unidad);
        }
    } else if(decena == 7)
    {
        if(unidad == 0)cout<<" setenta";
        else
	   {
            cout<<" setenta y ";
            convertirUnidades(unidad);
        }
    } else if(decena == 8)
    {
        if (unidad == 0)cout<<" ochenta ";
        else
	   {
            cout<<" ochenta y ";
            convertirUnidades(unidad);
        }
    } else if(decena == 9)
    {
        if(unidad == 0)cout<<" noventa";
        else
	   {
            cout<<" noventa y ";
            convertirUnidades(unidad);
        }
    }
}//Para convertirlo en centenas.
void convertirCentenas(int num)
{
    int centena = num / 100;
    int resto = num % 100;
    if(centena == 1)
    {
        if(resto == 0)cout<<" cien ";
        else cout<<" ciento ";
    } else if (centena == 2)cout<<" doscientos ";
    else if (centena == 3)cout<<" trescientos ";
    else if (centena == 4)cout<<" cuatrocientos ";
    else if (centena == 5)cout<<" quinientos ";
    else if (centena == 6)cout<<" seiscientos ";
    else if (centena == 7)cout<<" setecientos ";
    else if (centena == 8)cout<<" ochocientos ";
    else if (centena == 9)cout<<" novecientos ";
    if (resto > 0)
    {
        convertirDecenas(resto);
    }
}//Para convertirlo en el número complejo.
void convertirNumero(int num)
{
    if(num < 1 || num > 999)
    {
        cout<<" Numero fuera de rango (1-999)."<<endl;
        return;
    }
    if(num < 10)
    {
        convertirUnidades(num);
    }
    else if(num < 100)
    {
        convertirDecenas(num);
    }
    else
    {
        convertirCentenas(num);
    }
    cout<<endl;
}
int main()
{
    int numero;
    cout<<" Ingrese un numero entero positivo entre 1 y 999: ";
    cin>>numero;
    convertirNumero(numero);
    return 0;
}
