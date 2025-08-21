//Divide as seções dos territórios no total igualmente entre dois reinos.

#include <iostream>

int main () {

    int num_terras;
    std::cin >> num_terras;
    int soma_total = 0;
    int comprimentos [num_terras];
    int num_secoes = 0;
    for (int i = 0; i < num_terras; i++) {
        std::cin >> comprimentos[i];
        soma_total += comprimentos[i];
    }
    int soma_aux = 0;
    for (int i = 0; i < num_terras; i++) {
        soma_aux += comprimentos[i];
        num_secoes++;
        if (soma_aux == soma_total /2)
            break;
    }
    std::cout << num_secoes << '\n';

return 0;
}
