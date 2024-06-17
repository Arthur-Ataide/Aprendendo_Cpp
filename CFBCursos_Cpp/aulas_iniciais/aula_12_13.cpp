#include <iostream>
using namespace std;

int main(){

    int n=0;

    while (n < 10) {
        if (n == 5) {
            cout << "n = " << n << endl;
            break;
        }
        cout << n << endl;
        n++;
    }

    return 0;
}