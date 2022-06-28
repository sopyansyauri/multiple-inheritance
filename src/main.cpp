#include <iostream>
#include <string>

using namespace std;

// Base Class
class Nama{
    public:
        string nama;

        void setNama(string isiNama) {
            this->nama = isiNama;
            cout << "Nama: " << this->nama <<  endl;
        }
};

// Base Class
class Jurusan{
    public:
        string jurusan;
        
        void setJurusan(string isiSetJurusan) {
            this->jurusan = isiSetJurusan;
            cout << "Jurusan: " << this->jurusan << endl;
        }
};

// Base Class
class Umur{
    public:
        int umur;

        void setUmur(int isiUmur) {
            this->umur = isiUmur;
            cout << "Umur: " << this->umur << " Tahun" << endl;
        }
};

class Mahasiswa: public Nama, public Jurusan, public Umur {};

int main(int argc, char const *argv[])
{
    /* code */
    Mahasiswa murid1;
    murid1.setNama("Rifa'i Sopyan Syauri");
    murid1.setJurusan("Teknik Komputer dan jaringan");
    murid1.setUmur(20);
    
    return 0;
}
