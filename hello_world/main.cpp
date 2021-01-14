#include <iostream> //temel işlevler için kullanılan kütüphanedir.

using namespace std;

int main()
{

    //Başlangıç dersine hoş geldiniz.---------------------------------------------------
    /*
    << endl : Enter yapıyor.
    cout << : print fonk.
    */

    cout << "Hello world!" << endl;





    //Değişken Tipleri------------------------------------------------------------------
    /*
    float
    int
    double
    char
    bool
    */

    int a = 34;
    float b = 3.53;
    double c = 4.56457;
    char d = 'A'; //veya 65  "" ile '' arasında fark var
    bool e = false;

    cout << "e değişkeninin değeri : " << e << endl;

    int x,y,z = 0;

    y = 4;
    x = x + 6;

    cout << "x,y,z değişkeninin değeri : " << x << " "<< y << " " << z << endl;






    // operatorler -------------------------------------------------------------------
    /*
    +, -, *, /      işlemleri

    x++;   ------>   x+=1   ------------>   x = x+1
    */

    int sayi1 = 56;
    int sayi2 = 34;

    cout << "Çarpmanın Sonucu : " << sayi1*sayi2 << endl;
    cout << "Bölmenin Sonucu : " << sayi1/sayi2 << endl;
    cout << "Bölmenin Sonucu : " << float(sayi1)/sayi2 << endl;




    // İstek Alma -------------------------------------------------------------------
    /*
    cin >> se;
    cin >> sr;
    cin >> st;

    cin >> se >> sr >> st;

    İkiside aynıdır ister arada boşluk ile istersede enter ile karakterler
    verilebilir.
    */
    /*int se,sr,st;

    cout << "3 sayı giriniz :" << endl;


    cin >> se >> sr >> st;

    cout << "Değerler : " << se << " " << sr << " " << st << " " << se + sr + st << endl;
    */



    // STRİNGLER -------------------------------------------------------------
    /*

    */

    string str1 = "Bu veri tipi C++'ı C'den ayıran en büyük veri tipi.";
    string str2 = "Hadi bir cümle kuralım.";

    cout << str1 << endl;
    cout << str1 + " " + str2<< endl;
    return 0;
}



















