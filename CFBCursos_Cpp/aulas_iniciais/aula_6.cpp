#include <iostream>
using namespace std;

int n1;

int main(){

    // Operadores matematicos: + - / * % ()

    int n2, n3, result;

    n1 = 10;
    n2 = 5;
    n3 = 2;

    result = ((n1*2 + n2 + n3) - 9)/n3;

    cout << "Resultado de ((10*2 + 5 + 2)-9)/2 = " << result << endl;

    cout << "O resto de 10/3 = " << n1%3 << endl;

    return 0;
}