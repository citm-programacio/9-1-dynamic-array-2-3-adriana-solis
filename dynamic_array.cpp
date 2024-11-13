// dynamic_array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int* order(int* oldArray, int len, int n)
{
    int* newArray = new int[len + 1];
    for (int i = 0; i < len; i++)
    {
        newArray[i] = oldArray[i];
    }
    newArray[len] = n;

    int aux;

    for (int i = 1; i < len + 1; i++)
    {
        for (int j = 1; j < len + 1; j++)
        {
            if (newArray[j - 1] > newArray[j])
            {
                aux = newArray[j - 1];
                newArray[j - 1] = newArray[j];
                newArray[j] = aux;
            }
        }
    }
    

    return newArray;
}

void printArray(int* array, int len)
{
    cout << "The new array in order is: ";
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int num = -1;
    int length = 0;
    int* arr = nullptr;

    cout << "Insert a new number, send -1 to exit: " << endl;
    do
    {
        cin >> num;
        if (num != -1)
        {
            arr = order(arr, length, num);
            length++;
            printArray(arr, length);           
        }
        else
        {
            break;
        }


    } while (num != -1);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
