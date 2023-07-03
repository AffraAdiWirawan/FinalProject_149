#include <iostream>
using namespace std;

class MataKuliah {
public:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() { return 0; }
    virtual void cekKelulusan() { return; }
    virtual void input() {
        while (true) {
            cout << " Program Dibuat" << endl;
            cout << "Masukkan nilai Presensi: ";
            cin >> presensi;

            cout << "Masukkan nilai Activity: ";
            cin >> activity;

            cout << "Masukkan nilai Exercise: ";
            cin >> exercise;

            cout << "Masukkan nilai Tugas Akhir: ";
            cin >> tugasAkhir;

            if (tugasAkhir >= 75) {
                cout << "Selamat, Anda lulus mata kuliah dengan nilai akhir: " << tugasAkhir << endl;
                break;
            }
            else {
                cout << "Maaf, Anda tidak lulus mata kuliah dengan nilai akhir: " << tugasAkhir << endl;
            }
        }
        return;
    }

    void setPresensi(float nilai) {
        this->presensi = nilai;
    }
    float getPresensi() {
        return presensi;
    }
};

class Pemrograman : public MataKuliah {
public:
    
    int next; 
    void cekKelulusan(){
        try {
            cout << " apakah anda ingin mengulang program(Y/N) :";
            cin >> next;
            if (next == 'y' || 'Y' || next == 'N' || next == 'n')
                throw 0, 5;
        }
        catch (int a) {
            cout << "Program berhenti" << endl;
        }
        catch (...) {
            cout << "Invalid" << endl;
        }

        return;
    }
};

int main() {
    Pemrograman pemrograman;
    pemrograman.input();
    pemrograman.cekKelulusan();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
