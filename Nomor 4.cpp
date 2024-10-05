#include <iostream>
using namespace std;

int main(){
    int batas;

    cout << "Masukkan Angka : ";
    cin >> batas;

    cout << "Bilangan Ganjil : " << endl;
    for (int i = 1; i < batas; i += 2) {
        cout << i << endl;
    }

    cout << endl;
    cout << "Bilangan Genap  : " << endl;
    for (int i = 0; i < batas; i += 2) {
        cout << i << endl;
    }

    return 0;
}
