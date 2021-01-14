#include <iostream>

using namespace std;

int main(){

    /*int a = 5;

    int *ptr;

    ptr = &a;

    cout << *ptr << endl; // değeri yazdırır

    cout << ptr << endl; //adresi yazdırır

    cout << &a << endl; // adres yazdırır

    *ptr = 6;


    cout << a << endl;*/






    /*int arr[] = {1,2,3,4,5};

    cout << arr << endl; // 1 değerinin adresini yazdırır
    cout << arr + 1 << endl; // 2 değerinin adresini yazdırır
    // dikkat edin adreste 4 değer artıyor. Sebebi int 4 bit yer kaplar.

    ptr = arr; // yazıldığında direkt adres atanmış olur.

    ptr = ptr + 1;

    cout << *ptr << endl;

    cout << ptr[1] << endl;

    ptr = &arr[2];

    cout << *ptr << endl;

    cout << ptr[6] << endl; // diziden sonraki adreslerde dolaşmaya başladı.

    */

    // consr için şu detay çok önemli tuttuğu adres değişebilir ancak tutulan
    // adresteki değer değiştirilemez.

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    const auto *ptr1 = arr + 2;

    const auto *ptr2 = arr + 8;

    for(;ptr1!=ptr2;ptr1++){
        cout << *ptr1 << endl;
    }

    int *ptr_d = nullptr;

    ptr_d = new int; //bu adrese int değer tutulabilecek kadar yer ayırma talimatı vermiş oluyoruz.

    *ptr_d = 10;

    delete ptr_d; //bu adresin tuttuğu alanı sisteme geri bıraktık.

    // ptr_d artık dangling referans oldu.

    // cout << *ptr_d <<endl; yazarsak sistem yazılımı durdurur ve runtime error verir.



return 0;
}

















