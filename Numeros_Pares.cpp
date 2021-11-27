#include <iostream>
using namespace std;

int main()
{
    system("cls");
    system("color 0A");
    system("title Numeros Pares By JasonSzMZ");
    int residuo;
    printf("Bienvenido, aqui podras concoer cuales son los numeros pares del 1 - 100\n\n");
    for (int i = 0; i <= 100; i++)
    {
        residuo = i % 2;
        if (residuo == 0)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
}

///////////////////////////////////// DO-WHILE ////////////////////////////////////
/*int main()
{
    system("cls");
    int residuo, datan = 1, resOp;
    printf("Bienvenido, aqui podras concoer cuales son los numeros pares del 1 - 100\n\n");
    do
    {
        residuo = datan % 2;
        if (residuo == 0)
        {
            printf("%d\n",datan);
        }
        datan++;
    } while (datan <= 100);
}*/
///////////////////////////////////// WHILE ////////////////////////////////////
/*int main()
{
    system("cls");
    int residuo, datan = 1, resOp;
    printf("Bienvenido, aqui podras concoer cuales son los numeros pares del 1 - 100\n\n");
    while (datan <= 100)
    {
        residuo = datan % 2;
        if (residuo == 0)
        {
            printf("%d\n", datan);
        }
        datan++;
    }
}*/