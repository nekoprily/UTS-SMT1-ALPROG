#include <iostream>
using namespace std;

int main(){
    string kriteria;
    float imt, berat_badan, tinggi_badan;

    cout << "--------------------- Sistem Tingkat Kegemukan ---------------------\n" << endl;
    cout << "Selamat Datang Civitas Akademika" << endl;
    cout << "|\n|\n|\n";
    cout << "Sistem ini digunakan untuk menghitung Tingkat Kegemukan berdasarkan\n";
    cout << "- Berat Badan (kg)\n- Tinggi Badan (cm)\n" << endl;
    cout << "Masukkan berat badan anda : " << endl;
    cin >> berat_badan;
    cout << "Masukkan tinggi badan anda : " << endl;
    cin >> tinggi_badan;

    tinggi_badan = tinggi_badan / 100.0;

    imt = berat_badan / (tinggi_badan * tinggi_badan);

    if (imt < 18.4) {
        kriteria = "Berat Badan Kurang";
    } else if (imt >= 18.5 && imt <= 24.9) {
        kriteria = "Berat Badan Ideal";
    } else if (imt >= 25 && imt <= 29.9) {
        kriteria = "Berat Badan Lebih";
    } else if (imt >= 30 && imt <= 39.9) {
        kriteria = "Gemuk";
    } else {
        kriteria = "Sangat Gemuk";
    }

    cout << "Indeks Masa Tubuh (IMT) anda adalah: " << imt << endl;

    cout << endl;
    cout << "Anda tergolong : " << kriteria << endl;
    cout << "  < 18.4       : Berat Badan Kurang" << endl;
    cout << "  18.5 - 24.9  : Berat Badan Ideal" << endl;
    cout << "  25 - 29.9    : Berat Badan Lebih" << endl;
    cout << "  30 - 39.9    : Gemuk" << endl;
    cout << "  > 40         : Sangat Gemuk" << endl;

    return 0;
}
