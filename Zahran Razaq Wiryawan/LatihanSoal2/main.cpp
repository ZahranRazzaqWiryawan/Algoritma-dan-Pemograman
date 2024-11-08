#include <iostream>
using namespace std;

int main() {
    int jamKerja;

    cout << "Masukkan jumlah jam kerja per minggu: ";
    cin >> jamKerja;

    if (jamKerja > 40) {
        cout << "Upah lembur. Total upah: Rp " << (40 * 1000) + ((jamKerja - 40) * 2000) << endl;
    } else if (jamKerja == 40) {
        cout << "Jam kerja normal. Total upah: Rp " << (40 * 1000) << endl;
    } else {
        cout << "Jam kerja kurang. Denda dikenakan. Total upah: Rp " << (jamKerja * 1000) - ((40 - jamKerja) * 500) << endl;
    }

    return 0;
}
