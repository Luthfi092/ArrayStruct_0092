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
    mahasiswa mhs[1];

    for(int i = 0; i < 2; i++){
    cout << "Masukan NIM = ";
    cin >> mhs[1].nim;
    cin.ignore();
    cout << "Masukan Nama = ";
    getline(cin, mhs[1].nama);
    cout << "Masukan Alamat Desa =";
    cin >> mhs[1].alamat.desa;
    cout << "Masukan Alamat Kota =";
    cin >> mhs[1].alamat.kota;
    }

cout << endl;
cout << "Data Mahasiswa" << endl;

cout << "NIM = " << mhs[1].nim << endl;
cout << "Nama = " << mhs[1].nama << endl;
cout << "Alamat Desa = " << mhs[1].alamat.desa << endl;
cout << "Alamat Kota = " << mhs[1].alamat.kota << endl;

}

