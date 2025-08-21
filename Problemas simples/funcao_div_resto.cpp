/*Calcula divisão e resto de uma lista de números, se caso for possível. A entrada é composta pela quantidade de números
seguido de uma lista em várias linhas com o dividendo e divisor. Deve imprimir o quociente e resto ou "indefinido" se não der para dividir.*/

#include <iostream>

bool divresto (int dividendo, int divisor, int &quociente, int &resto) { //Calcula a divisão e o resto.

    if (divisor == 0 || dividendo < 0 || divisor < 0)
        return false;

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

return true;
}

int main () {

    int quantNumeros;
    std::cin >> quantNumeros;

    std::pair <int, int> numeros [quantNumeros]; //Armazena os dividendos e divisores de cada linha.
    for (int i = 0; i < quantNumeros; i++) {
        std::cin >> numeros[i].first;
        std::cin >> numeros[i].second;
    }

    int quociente, resto;
    bool dividiu;
    for (int i = 0; i < quantNumeros; i++) {    
        dividiu = divresto (numeros[i].first, numeros[i].second, quociente, resto);
        if (!dividiu)
            std::cout << "indefinido\n";
        else
            std::cout << quociente << " " << resto << '\n';
    }

return 0;
}
