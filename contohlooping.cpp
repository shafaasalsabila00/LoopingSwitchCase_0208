#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std;

int main(){
    int counter;
    int i;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //Loop with for 
    //Loop for ascending
    for(counter = 0; counter < 5; counter++){
        cout << "Nilai counter = " << counter << " TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout << endl;

    //Loop for descending
    for(counter = 5; counter > 0; counter--){
        cout << "Nilai counter = " << counter << " TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout << endl;

    //loop with while
    srand(time(0));
    i = rand() % 10;

    cout << "Nilai awal i = " << i << endl;
    while (i < 7)
    {
        cout << "Nilai i = " << i << " TI UMY" << endl;
        i = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai akhir i = " << i << endl;

    cout << endl;

    // loop do while
    cout << "Perulangan Do While"<< endl;
    do
    {
        cout << "Nilai i = " << i << " TI UMY" << endl;
        i = rand() % 10;
        perulanganDo++;
    } while (i < 7);
    cout << "Jumlah Perulangan = " << perulanganDo << endl;
    cout << "Nilai akhir i = " << i << endl;
}


#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b){
    return a * b;
}

float luasLingkaran(float a) {
    return 3.14*a*a;
}

int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

    do{
        cout <<"Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;


        switch (pilihan)
        {
            case 1:
                cout << "Hitung luas persegi panjang" << endl;
                cout << "Masukkan panjang = ";
                cin >> panjang;
                cout << "Masukkan lebar = ";
                cin >> lebar;
                cout << "Luas persegi panjang = " << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Hitung luas Lingkaran" << endl;
                cout << "Masukkan jari-jari = ";
                cin >> jejari;
                cout << "Luas lingkaran = " << luasLingkaran(jejari) << endl;
                break;
            case 3:
                break;
            default:
                cout << "Pilihan salah, pilihan harus diantara 1-3.";
                break;
        }
     }while(pilihan != 3);
}