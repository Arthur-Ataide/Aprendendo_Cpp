#include <iostream>
using namespace std;

int main(){

    int n1, n2, nota;
    string res;

    cin >> n1;
    cin >> n2;

    nota = n1 + n2;

    // (nota >= 60) ? res = "aprovado" : res = "reprovado";
    res = (nota >= 60) ? "aprovado" : "reprovado";

    cout << "O Aluno foi " << res << endl;

    return 0;
}
