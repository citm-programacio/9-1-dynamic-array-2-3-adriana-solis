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
    
    delete[] oldArray;
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
            cout << "Thanks for playing!";
            break;
        }


    } while (num != -1);

}
