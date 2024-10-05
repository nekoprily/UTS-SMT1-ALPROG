#include <iostream>
using namespace std;

int main(){
    string nama, npm;
    int nilai_absen, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char huruf_mutu;

    cout << "--------------------- Sistem Nilai Akhir Mahasiswa ---------------------\n" << endl;
    cout << "Selamat Datang Civitas Akademika" << endl;
    cout << "|\n|\n|\n";
    cout << "Sistem ini digunakan untuk menghitung Nilai Akhir Mahasiswa berdasarkan\n";
    cout << "- Nilai Absen (10%)\n- Nilai Tugas (20%)\n- Nilai UTS (30%)\n- Nilai UAS (40%)\n" << endl;
    cout << "Masukkan Nama Mahasiswa" << endl;
    cout << "=> ";
    getline(cin,nama);
    cout << "\nMasukkan NPM mahasiswa" << endl;
    cout << "=> ";
    cin >> npm;
    cout << "\nMasukkan Nilai Absen" << endl;
    cout << "=> ";
    cin >> nilai_absen;
    cout << "\nMasukkan Nilai Tugas" << endl;
    cout << "=> ";
    cin >> nilai_tugas;
    cout << "\nMasukkan Nilai UTS" << endl;
    cout << "=> ";
    cin >> nilai_uts;
    cout << "\nMasukkan Nilai UAS" << endl;
    cout << "=> ";
    cin >> nilai_uas;

    nilai_akhir = nilai_absen * 0.1 + nilai_tugas * 0.2 + nilai_uts * 0.3 + nilai_uas * 0.4;

    if (nilai_akhir >= 85 && nilai_akhir <= 100) {
        huruf_mutu = 'A';
    } else if (nilai_akhir >= 80 && nilai_akhir <= 85) {
        huruf_mutu = 'B';
    } else if (nilai_akhir >= 75 && nilai_akhir <= 80) {
        huruf_mutu = 'C';
    } else if (nilai_akhir >= 70 && nilai_akhir <= 75) {
        huruf_mutu = 'D';
    } else {
        huruf_mutu = 'E';
    }

    cout << endl;
    cout << "--------------- Informasi Mahasiswa ---------------\n" << endl;
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "NPM            : " << npm << endl;
    cout << "Nilai Absen    : " << nilai_absen << endl;
    cout << "Nilai Tugas    : " << nilai_tugas << endl;
    cout << "Nilai UTS      : " << nilai_uts << endl;
    cout << "Nilai UAS      : " << nilai_uas << endl;
    cout << "\nNilai Akhir    : " << nilai_akhir << endl;
    cout << "---------------------------------------------------" << endl;

    return 0;
}
