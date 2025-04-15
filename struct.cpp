#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim ="20240140001";
    mhs.nama ="Abra";
    mhs.alamat ="Kasihan";

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan Nama = ";
    cin >> mhs.nama;
    cout << "Masukan Alamat =";
    cin >> mhs.alamat;


}
