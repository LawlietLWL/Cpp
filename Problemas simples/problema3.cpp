//Verifica se matriz da entrada é triangular superior (todos elementos abaixo da diagonal principal são nulos).
//A entrada é o tamanho da matriz, seguido dos valores dela.

#include <iostream>

int main () {

    int tam;
    std::cin >> tam;
    int matriz[tam][tam];
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
            std::cin >> matriz[i][j];

    bool triangular = true;
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
            if (i > j && matriz[i][j] !=0) {
                triangular = false;
                break;
            }

    if (triangular)
        std::cout << "Sim\n";
    else
        std::cout << "Nao\n";

return 0;
}
