#include <iostream>
using namespace std;

int main(){

    for (int tempo = 0; tempo<1000000000; tempo++);

    for (int i=0, j=1, z=0; i<10 && j<10; i++, j+=2, z+=2){
        cout << "i = " << i;
        cout << " j = " << j;
        cout << " z = " << z << endl;
    }    

    return 0;
}