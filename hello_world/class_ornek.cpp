#include <iostream>

using namespace std;
// FUNCTİON OVERLOADİNG
void selamla(){
    cout << "Merhaba herkese" <<endl;
}

void selamla(string name){
    cout << "merhaba "<< name << endl;
}



/*
    sınıflar birer nesneyi temsil eder. Bellek nesne oluşturulmadan 
    yer ayırma işlemi yapmaz. 

    Encapsulation : Uygulamayı yazan kişi belli sınırlar koyar ve kullanıcı
    buna erişemez. Gizli verilerin metodlar aracılığı ile erişilebilir hale 
    getirilmesi için metodlar vardır. Tüm bunları bir araya getirme işlemine
    denir.

    Soyutlama (Abstraction) : Soyutlama, yalnızca gerekli bilgilerin 
    görüntülenmesi ve ayrıntıların gizlenmesi anlamına gelir.

    Polimorfizm : Aynı isim ile farklı biçime sahip olmak.(function overloading)

    Kalıtım (Inheritance) : Ana sınıf üzerinden başka sınıflar türetmeye denir.
        Alt(Sub) sınıf ----> Miras alan sınıf
        Süper sınıf ---> Miras alınan sınıf
        Yeniden kullanılabilirlik

    ERİŞİM BELİRTEÇLERİ
    1.Public : Erişime açıktır. Heryerden erişilebilir.
    2.Private : Sadece sınıf içindeki fonksiyonlar tarafından ve friend kipi almış 
    class ve işlevlerden erişilebilir. (friend kipi ayrıca işlenecektir.)
    3.Protected : Korumalı erişim değiştirici, arkadaş sınıfının yardımı olmadan 
    kendi sınıfının dışından erişilememesi açısından özel erişim değiştiriciye benzer; 
    aradaki fark, Korumalı olarak bildirilen sınıf üyelerine herhangi biri tarafından 
    erişilebilmesidir. sınıfın alt sınıfı (alt sınıf)(inheritance). 

*/
class citizen{
    public:
        citizen();
        citizen(string name, string tc_no, string surname){
            this->name = name;
            this->surname = surname;
            this->tc_no = tc_no;
        }

    protected:
        string tc_no;
        string name;
        string surname;
        
        void set_tc_no(string tc_no){
            this->tc_no = tc_no;
        }

        string get_tc_no(){
            return tc_no;
        }

        void set_name(string name){
            this->name = name;
        }

        string get_name(){
            return name;
        }

        void set__surname(string surname){
            this->surname = surname;
        }

        string get_surname(){
            return surname;
        }

};


class Student : public citizen{

public:
    Student(int id,int class_num, string class_name,citizen people){
        this->id = id;
        this->class_num = class_num;
        this->class_name = class_name;

        citizen iam = people;
    }

protected:
    int id;
    int class_num;
    string class_name;
    

    void whoami(){
        cout << get_name() << " " << get_surname() << endl;
    }

    void sinif_atla(){
        class_num++;
    }

    void change_class_name(string class_name){
        this->class_name = class_name;
    }


};

int main(){

    /*selamla();
    selamla("hüseyin");*/





    
    return 0;
}

