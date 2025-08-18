//Retorna a produção média de acordo com número de funcionários que trabalharam e o quanto produziram.

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
