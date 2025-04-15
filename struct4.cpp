#include <iostream>
#include <string>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;

};


struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;

    for(int i = 0; i < 2; i++){
    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukan Nama = ";
    getline(cin, mhs.nama);
    cout << "Masukan Alamat Desa =";
    cin >> mhs.alamat.desa;
    cout << "Masukan Alamat Kota =";
    cin >> mhs.alamat.kota;
    }

cout << endl;
cout << "Data Mahasiswa" << endl;

cout << "NIM = " << mhs.nim << endl;
cout << "Nama = " << mhs.nama << endl;
cout << "Alamat Desa = " << mhs.alamat.desa << endl;
cout << "Alamat Kota = " << mhs.alamat.kota << endl;

}

