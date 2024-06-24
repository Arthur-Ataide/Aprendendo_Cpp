#include <iostream>

using namespace std;

int main() {
    
    int vetor[5] = {0, 2, 4, 6, 8};

    cout << "sizeof(vetor) = " << sizeof(vetor) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(vetor)/sizeof(int) = " << sizeof(vetor)/sizeof(int) << endl << endl;


    for (int i=0; i < sizeof(vetor)/sizeof(int); i++)
        cout << vetor[i] << endl;

    return 0;
}