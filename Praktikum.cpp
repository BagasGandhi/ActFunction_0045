
#include <iostream>
using namespace std;
// Deklarasi Global
    float p,l;

//Implementasi Prosedur & Fungsi
void Input() {
    cout << "Masukkan sisi Panjang : ";
    cin >> p;
    cout << "Masukkan sisi Lebar : ";
    cin >> l;
}
  
float LuasPersegi(){
    return p*l;
}

void output (){
    cout << "Hasilnya = " << LuasPersegi();
}
//program utama
int main() 
{//start
    Input();
    output();
}//selesai