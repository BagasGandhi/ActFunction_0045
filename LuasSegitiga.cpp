#include <iostream>
using namespace std;

float hitungLuas(float a, float t) {
    return 0.5 * a * t;
}

void input() {
    double a, t, luas;

    cout << "Masukkan alas   : ";
    cin >> a;

    cout << "Masukkan tinggi : ";
    cin >> t;

    luas = hitungLuas(a, t);

    cout << "Luas segitiga = " << luas << endl;
}

int main() {
    input();
    return 0;
}