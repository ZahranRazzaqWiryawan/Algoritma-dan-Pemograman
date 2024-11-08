#include <iostream>
using namespace std;

int main() {
    int A, B;
    char pilihan;

    cout << "Masukkan A dan B: ";
    cin >> A >> B;
    cout << "Pilih operasi (a: A+B, b: A-B, c: A*B, d: A/B, e: A div B, f: A mod B): ";
    cin >> pilihan;

    switch(pilihan) {
        case 'a': cout << "A + B = " << A + B << endl; break;
        case 'b': cout << "A - B = " << A - B << endl; break;
        case 'c': cout << "A * B = " << A * B << endl; break;
        case 'd':
            if (B != 0) cout << "A / B = " << (float)A / B << endl;
            else cout << "Error: Pembagian dengan 0!" << endl;
        break;
        case 'e':
            if (B != 0) cout << "A div B = " << A / B << endl;
            else cout << "Error: Pembagian dengan 0!" << endl;
        break;
        case 'f':
            if (B != 0) cout << "A mod B = " << A % B << endl;
            else cout << "Error: Pembagian dengan 0!" << endl;
        break;
        default: cout << "Bukan pilihan menu yang benar" << endl;
    }

    return 0;
}
