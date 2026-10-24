// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int pilihan,penumpang,harga,total;
string tujuan;
void tiket()
{
    cout<<"---HARGA TIKET TUJUAN---"<<endl;
    cout<<"1. Malang-Surabaya: Rp35000"<<endl;
    cout<<"2. Malang-Pasuruan: Rp20000"<<endl;
    cout<<"3. Malang-Jombang: Rp25000"<<endl;
}
void to ()
{
    cout<<"Pilih tiket tujuan anda: ";
    cin>>pilihan;

    if (pilihan==1)
    {
        tujuan="malang-surabaya";
        harga=35000;
        cout<<"_________________________"<<endl;
        cout<<"Tujuan= Malang-Surabaya"<<endl;
        cout<<"Harga= Rp35000"<<endl;
        cout<<"_________________________"<<endl;
    }
    else if (pilihan==2)
    {
        tujuan="Malang-Pasuruan";
        harga=20000;
        cout<<"_________________________"<<endl;
        cout<<"Tujuan= Malang-Pasuruan"<<endl;
        cout<<"Harga= Rp20000"<<endl;
        cout<<"_________________________"<<endl;
    }
    else if (pilihan==3)
    {
        tujuan="Malang-Jombang";
        harga=25000;
        cout<<"_________________________"<<endl;
        cout<<"Tujuan= Malang-Jombang"<<endl;
        cout<<"Harga= Rp25000"<<endl;
        cout<<"_________________________"<<endl;
    }
    else 
    {
        cout<<"_________________________"<<endl;
        cout<<"Pilihan tidak tersedia."<<endl;
        cout<<"_________________________"<<endl;
    }

    cout<<"Masukkan Jumlah Penumpang: ";
    cin>>penumpang;
    total=harga*penumpang;
    cout<<"_________________________"<<endl;
    cout<<"---DETAIL TIKET---"<<endl;
    cout<<"Tujuan: ";
    cout<<tujuan<<endl;
    cout<<"Jumlah Penumpang: ";
    cout<<penumpang<<endl;
    cout<<"Total Harga: ";
    cout<<total<<endl;
    system("pause");
    
    
        
}
int main() {
    tiket();
    to();
        
    

    
    return 0;
}
