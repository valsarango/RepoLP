#include <iostream>
using namespace std;
void easy_23()
{
    cout<<"Ejercicio: easy_23"<<endl;

    srand(time(NULL)); // Inicializar semilla

    int matriz[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 9 + 1;
            cout<<matriz[i][j]<<" ";
        }
            cout<<endl;
    }

}