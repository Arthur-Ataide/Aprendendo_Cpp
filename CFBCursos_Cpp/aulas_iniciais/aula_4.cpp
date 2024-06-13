#include <iostream>

using namespace std;

int main(){
    int vidas = 0; // 10 20
    char letra = 'A'; // 'A'
    double decimal = 3.14; // 3.147254
    float decimal2 = 3.1; // 3.14
    bool vivo = true; // true / false
    string nome = "Arthur"; // "Arthur"

    cout << vidas << endl;
    cout << letra << endl;
    cout << decimal << endl;
    cout << decimal2 << endl;
    cout << vivo << endl;
    cout << nome << endl;

    system("pause");
    system("cls");

    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite quantos reias voce tem: ";
    cin >> decimal;

    cout << "Qual o seu nome?\n";
    cin >> nome;

    cout << "\n\n" << vidas << endl;
    cout << letra << endl;
    cout << decimal << endl;
    cout << decimal2 << endl;
    cout << vivo << endl;
    cout << nome << endl;
    
    system("pause");

    return 0;
}