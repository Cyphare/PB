// TLS Caption Maker
// Made by Arnold Gavrael - TIF - 539797

#include <iostream>
#include <string>
using namespace std;

int main() {
    string prodi, nama, asal, cita, quotes, akun;
    char pilihan;
    int jumlah = 0; // counter total
    int TE = 0; // counter te
    int TI = 0; // counter ti
    int TB = 0; // counter tb

    do {cout << "Nama: ";
        getline(cin >> ws, nama); // input nama
        cout << "Prodi: ";
        getline(cin >> ws, prodi); // input prodi

        while (prodi != "Teknik Elektro" && prodi != "Teknologi Informasi" && prodi != "Teknik Biomedis") {
            cout << "Invalid! Masukkan Prodi dalam DTETI: ";
            getline(cin >> ws, prodi);} // jika input tidak sesuai, ulangi

        cout << "Asal: ";
        getline(cin >> ws, asal); // input asal
        cout << "Cita-cita: ";
        getline(cin >> ws, cita); // input cita-cita
        cout << "Quotes (dengan tanda petik): ";
        getline(cin >> ws, quotes); // input quotes
        cout << "Akun IG (dengan @): ";
        getline(cin >> ws, akun); // input akun IG
        cout << endl;

        if (prodi == "Teknik Elektro")
        {TE++;} // naikin counter te jika ngetik prodi te
        else if (prodi == "Teknologi Informasi")
        {TI++;} // naikin counter ti jika ngetik prodi ti
        else if (prodi == "Teknik Biomedis")
        {TB++;} // naikin counter tb jika ngetik prodi tb

        cout << "--------------------------------------------------\n";
        cout << "TEROBIETIANS, CHOOSE YOUR CHARACTER!\n";
        cout << endl;
        cout << "Halo, namaku " << nama << " dari prodi "
             << prodi << ". Aku berasal dari "
             << asal << " dan aku memiliki impian untuk menjadi "
             << cita << ". Kamu bisa kenal aku lebih lanjut di "
             << akun << " lho! Kutunggu kedatanganmu!\n";
        cout << endl;
        cout << quotes << endl;
        cout << endl;
        cout << "#TLS2024 #TETITB2024 #Terobietia #DayaDataMedika\n";
        cout << "--------------------------------------------------\n";
        cout << endl; // output caption dengan data yang telah dimasukkan

        jumlah++;
        cout << "Total siswa: " << jumlah << endl;
        cout << "Siswa TE: " << TE << endl;
        cout << "Siswa TI: " << TI << endl;
        cout << "Siswa TB: " << TB << endl;
        cout << endl; // naikkan counter sesuai data yang telah dimasukkan

        cout << "Masukkan data lagi? (Y/N): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');
    // jika pilih y, maka bisa input data siswa lain
    
    cout << "Pastikan jumlah siswa sudah sesuai!\n"; // jika pilih n, program selesai
    return 0;
}
