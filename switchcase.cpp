#include<iostream>
using namespace std;
int main(){
int banka_islemleri;
int havale;
int para_cekme;
int para_yatirma;
int islem;
int bakiye{2000};
cout<<"ATM'mize hosgeldiniz!"<<endl;
cout<<"islemler: \n1-bakiye sorgulama \n2-para cekme \n3-para yatirma \n4-havale"<<endl;
cout<<"Lutfen yapmak istediginiz islemi secin:";
cin>>islem;
switch(islem){
    case 1: cout<<"Bakiyeniz: "<<bakiye<<endl;
    break;
    case 2: cout<<"cekmek istediginiz tutari giriniz: ";
    cin>>para_cekme;
    bakiye=bakiye-para_cekme;
    cout<<"Yeni bakiyeniz: "<<bakiye<<endl;
    break;
    case 3: cout<<"Yatirmak istediginiz tutari yaziniz: ";
    cin>>para_yatirma;
    bakiye=para_yatirma+bakiye;
    cout<<"Yeni bakiyeniz: "<<bakiye<<endl;
    break;
    case 4: cout<<"Havale yapilacak tutari giriniz: ";
    cin>>havale;
    bakiye=bakiye-havale;
    cout<<"Yeni bakiyeniz: "<<bakiye<<endl;
    break;
//Hata vermiyor ama her seçimde sadece bakiye gösteriyor. Nedenini bul.(düzeldi. sorun switch parantezindeki yanlış isimdi.)
}

    return 0;
}