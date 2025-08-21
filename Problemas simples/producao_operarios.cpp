/*Retorna a produção média de acordo com número de funcionários que trabalharam e o quanto produziram.
A entrada é composta pelo número de funcionários, seguido de uma lista com o número de suas produções 
e depois uma lista de 1 ou 0 que determina se o funcionário trabalhou ou não no dia.*/ 

#include <iostream>
#include <iomanip>

int main () {

    int numOperarios, totalProduzido = 0, numTrabalhou = 0;
    int numProdutos[numOperarios];
    bool trabalhou [numOperarios];

    std::cin >> numOperarios;

    for (int i=0; i<numOperarios;i++) {
        std::cin >> numProdutos[i];
        totalProduzido += numProdutos[i];
    }

    for (int i=0; i<numOperarios;i++) {
        std::cin >> trabalhou[i];
        numTrabalhou += trabalhou[i];
    }
    
    if (numTrabalhou == 0)
        std::cout << "FECHADO\n";
    else
        std::cout << std::fixed << std::setprecision(1) << (double) totalProduzido / numTrabalhou << '\n';

return 0;
}
