#include <iostream>

using namespace std;

struct adress{
    int posta_kod;
    string adres_name;
};
struct employee{
    int id;
    string name;
    string departman;
    adress adres;
    int *deger;
};

int main(){

    employee calisan = {101201, "mehmet", "IT",{14,"merdivenköy"}};

    /*calisan.id = 101201;

    cout << calisan.name << endl;

    calisan.name = "mehmet";

    cout << calisan.name << endl;*/


    employee *ptr = &calisan;

    int s = 5;

    /*1 struct'ın değerlerine pointer ile erişilecekse 
    -> ile, normal değişken ile erişilecekse . ile erişilir.
    
    Bunun en büyük acvantajı fonksiyon üzerinde struct 
    içinde değişiklik yapılıp kayıt edilmesi gerektiğinde
    bu yöntem kullanılır.
    */
    cout << calisan.name << endl;
    cout << ptr->name << endl;

    /*
    cout << *ptr.name << endl; // calışmaz
    cout << ptr.name << endl; // calışmaz
    */
    ptr->deger = &s;

    cout << calisan.deger << endl;

    cout << ptr->deger << endl;
    // cout << ptr->*deger << endl; Çalışmaz

    /* struct'larda int,float gibi bir veri tipidir.
    bu yüzden fonksiyon geri dönüş değeri, fonksiyonlara 
    gönderilen veri tipidir.

    */

   /*
   struct içinde struct'a çok dikkat. pointerla gösterdik.
   Ama içerdeki struct normal tanımlı onun için . ile 
   ulaştık. struct içinde pointer tanımlamış olsaysık
   -> ile erişilecekti.
   */
   cout << calisan.adres.posta_kod << endl;

   cout << ptr->adres.posta_kod << endl;

   cout << sizeof(calisan) << endl;
   // bayt olarak boyut döndürülür.

    return 0;
}



