#include <iostream>

using namespace std;

int main(){

    /*

    || ----> veya
    && ----> ve
    ! -----> değil

    */

    /*string araba;
    cout << "arabanızın markasını giriniz : ";

    cin >> araba;

    if(araba == "Mercedes" || araba == "BMW"){
        cout << "Çok değerli bir arabanız var.";

    }
    else if(araba == "Audi" || araba != "Dacia"){
        cout << "Güzel bir arabanız var.";


    }
    else{
    cout << "Daha çok çalışmalısınız.";

    }*/



    int i = 0;

    //DO WHİLE
    do{
    cout << "i'nin ilk hali : " << i << endl;
    i++;
    }while(i<10);


    int a[] = {0,1,2,3,4,5,6,7,8,9};

    //FOR
    for(int i = 0;i<10;i++){
        cout << i <<".deger : " << a[i] << endl;
    }

    //FOR EACH
    for(int deger:a){
        cout <<"deger : " << deger << endl;
    }











    return 0;
}
