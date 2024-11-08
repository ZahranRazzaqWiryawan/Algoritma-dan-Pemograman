#include <iostream>
using namespace std;

int main() {
    int beratBadan;

    cout << "Masukkan berat badan atlit (kg): ";
    cin >> beratBadan;

    if (beratBadan < 45) {
        cout << "Tidak memenuhi kualifikasi" << endl;
    } else if (beratBadan <= 50) {
        cout << "Kelas A" << endl;
    } else if (beratBadan <= 55) {
        cout << "Kelas B" << endl;
    } else if (beratBadan <= 60) {
        cout << "Kelas C" << endl;
    } else if (beratBadan <= 65) {
        cout << "Kelas D" << endl;
    } else if (beratBadan <= 70) {
        cout << "Kelas E" << endl;
    } else {
        cout << "Kelas F" << endl;
    }

    return 0;
}
