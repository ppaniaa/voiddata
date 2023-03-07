#include <iostream>
#include <string>
using namespace std;

class basic{

    public:
        int j, jm;
        string namaA, namaB , b;
        float bm;

    void guruin(){
        cout<<"Masukkan NISN guru: "; cin>>j;
        cout<<"Masukkan Nama guru: ";
        cin.ignore();
        getline(cin, namaA);
        cout<<"Masukkan Mata Pelajaran guru: ";
        cin.ignore();
        getline(cin, b);
    }
    void guruout(){
        cout<<"NISN: "<<j<<endl;
        cout<<"Nama: "<<namaA<<endl;
        cout<<"Mata Pelajaran: "<<b<<endl;
    }
    void muridin(){
        cout<<"Masukkan NISN murid: "; cin>>jm;
        cout<<"Masukkan Nama murid: ";
        cin.ignore();
        getline(cin, namaB);
        cout<<"Masukkan Penilaian murid: "; cin>>bm;
    }
    void muridout(){
        cout<<"NISN: "<<jm<<endl;
        cout<<"Nama: "<<namaB<<endl;
        cout<<"Penilaian: "<<bm<<endl;
    }   
};

int main(){
    int angka;
    cout<<"Masukkan angka [1] untuk guru atau [2] untuk siswa: "<<endl; cin>>angka;
    if(angka == 1){
        basic missvero;
        missvero.guruin();
        missvero.guruout();
    }
    else if(angka == 2){
        basic missvero;
        missvero.muridin();
        missvero.muridout();
    }
    else{
        cout<<"[1] or [2] only"<<endl;
        exit;
    }
}
