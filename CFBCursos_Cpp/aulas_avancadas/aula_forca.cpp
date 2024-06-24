#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {

    char palavra[50], palavra_secreta[50], letra, letras_erradas[26], palavra_atual[50];
    int chance, aux, tam, acertou, erros;

    cout << "Qual a palavra da forca?\n";
    cin >> palavra_secreta;

    cout << "Voce tera quantas chances?\n";
    cin >> chance;
    erros = 0;

    system("pause");
    system("cls");

    tam = strlen(palavra_secreta);;

    for (int i = 0; i < tam; i++){
        palavra_atual[i] = '_';
    }

    palavra_atual[tam] = '\0';
    letras_erradas[0] = '\0';

    while (chance-erros > 0){
        cout << "Voce ainda tem Chances: " << chance-erros << "\n";
        cout << "Palavra: " << palavra_atual << "\n";
        cout << "Letras erradas: " << letras_erradas << "\n";
        cout << "Dejesa chutar uma letra[1] ou uma palavra[2]?\n\n";
        cin >> aux;

        switch (aux){
            case 1:
                cout << "digite uma letra\n";
                cin >> letra;

                acertou = 0;
                for (int i=0; i <tam; i++){
                    if (palavra_secreta[i] == letra){
                        palavra_atual[i] = letra;
                        acertou = 1;
                    }
                }
                if (!acertou){
                    cout << "A letra " << letra << " nao esta na palavra\n";
                    letras_erradas[erros] = letra;
                    letras_erradas[erros+1] = '\0';
                    erros++;
                }
                
                break;
            
            case 2:
                cout << "digite uma palavra\n";
                cin >> palavra;

                if (strlen(palavra) != tam){
                    erros++;
                    break;
                }

                acertou = 1;
                for (int i=0; i < tam; i++){
                    if (palavra_secreta[i] != palavra[i]){
                        acertou = 0;
                        erros++;
                        break;
                    }
                }
                if (acertou){
                    cout << "PARABENSSS VOCE ACERTOU A PALAVRA!!!\n";
                    return 0;
                }
                break;
            
            default:
                cout << "Erro na digitacao\n";
                return 0;
                break;
        }

        system("pause");
        system("cls");
    }
    
    cout << "Voce nao acertou a palavra no tempo necessario\n";

    return 0;

}
