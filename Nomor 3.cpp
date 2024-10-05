#include <iostream>
using namespace std;

float penjumlahan(float operand1, float operand2) {
    float hasil = operand1 + operand2;
    return hasil;
}

float pengurangan(float operand1, float operand2) {
    float hasil = operand1 - operand2;
    return hasil;
}

float perkalian(float operand1, float operand2) {
    float hasil = operand1 * operand2;
    return hasil;
}

float pembagian(float operand1, float operand2) {
    float hasil = operand1 / operand2;
    return hasil;
}

int sisaBagi(int operand1, int operand2) {
    int hasil = operand1 % operand2;
    return hasil;
}

int main(){
    int pilih;
    float operand1, operand2, hasil;
    char ulang;

    cout << "--------------------- Sistem Operasi Matematika ---------------------\n" << endl;

    cout << "Pilih salah satu opsi : " << endl;
    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "3. Operasi Perkalian" << endl;
    cout << "4. Operasi Pembagian" << endl;
    cout << "5. Operasi Sisa Bagi" << endl;
    cout << "6. Keluar" << endl;
    cin >> pilih;

    switch (pilih){
        case 1:
            cout << endl;
            cout << "========== Operasi Penjumlahan ==========" << endl;
            cout << endl;

            cout << "Masukkan angka pertama : ";
            cin >> operand1;

            cout << "Masukkan angka kedua : ";
            cin >> operand2;

            hasil = penjumlahan(operand1, operand2);

            cout << endl;
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;

            break;
        case 2:
            cout << "========== Operasi Pengurangan ==========" << endl;

            cout << endl;
            cout << "Masukkan angka pertama : ";
            cin >> operand1;

            cout << "Masukkan angka kedua   : ";
            cin >> operand2;

            hasil = pengurangan(operand1, operand2);

            cout << endl;
            cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;

            break;
        case 3:
            cout << endl;
            cout << "========== Operasi Perkalian ==========" << endl;

            cout << endl;
            cout << "Masukkan angka pertama : ";
            cin >> operand1;

            cout << "Masukkan angka kedua   : ";
            cin >> operand2;

            hasil = perkalian(operand1, operand2);

            cout << endl;
            cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;

            break;
        case 4:
            cout << endl;
            cout << "========== Operasi Pembagian ==========" << endl;

            cout << endl;
            cout << "Masukkan angka pertama : ";
            cin >> operand1;

            cout << "Masukkan angka kedua : ";
            cin >> operand2;

            hasil = pembagian(operand1, operand2);

            cout << endl;
            cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;

            break;
        case 5:
            int angka1, angka2, hasilSisaBagi;
            cout << endl;
            cout << "========== Operasi Sisa Bagi ==========" << endl;

            cout << endl;
            cout << "Masukkan angka pertama : ";
            cin >> angka1;

            cout << "Masukkan angka kedua : ";
            cin >> angka2;

            hasilSisaBagi = sisaBagi(angka1, angka2);

            cout << endl;
            cout << "Hasil dari Sisa Bagi untuk " << angka1 << " dan " << angka2 << " adalah " << hasilSisaBagi << endl;

            break;
        case 6:
            cout << endl;
            cout << "Keluar dari sistem" << endl;
            return 0;
        }

    cout << "Terima kasih" << endl;

    return 0;
}
