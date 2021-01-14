#include <iostream>

using namespace std;

void ArttirVeYazdir();
auto topla(int x, int y);

int main(){

    /*
    Değer Tanımlama Yöntemleri

    int x = 0 ---> int x(0) ----> int x{0}

    auto x = 0; ---> ilk tanımlama durumunda değişkenin tipinin kendini tanıması

    static int x = 0; ---> Program işlediği sürece bellekte kendisine
                           belirli bir yer ayrılan değişken türüdür.
    Örneğin bir fonksiyon içerisindeki bir statik değişken
    fonksiyon ne kadar çağırılırsa çağırılsın bir kez tanımlanır.


    */

    /*auto x = 10;

    x = 5;

    cout << "simdi x : " << x << endl;*/


    ArttirVeYazdir();
    ArttirVeYazdir();
    ArttirVeYazdir();



    //İkilik sayı sabitlerinin başına “0b”,
    //sekizliklerin başına “0” ve on altılıkların başına “0x” koyulur.

    int y = 0b01011001;

    int x = 0765;

    int f = 0xFF;

    const double gravity { 9.8 }; //değer kod içersinde değiştirilemez.

    // #define SABIT 100 -----> farklı tanımlama şekli



    return 0;
}


void ArttirVeYazdir(){
    static int s_degisken = 1;
    // Degisken statiktir.

    ++s_degisken;
    std::cout << s_degisken << std::endl;

} // s_degisken yok edilmedi.


