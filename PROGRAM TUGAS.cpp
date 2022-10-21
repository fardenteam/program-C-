#include <iostream>
 
using namespace std;
 
int main()
{
  int alas,tinggi,LS,s,LK,r,LL,jari_jari,LB,Volume;
  char pilih,ulang;
  
  do{
      cout<<"-------------------------------------\n";
      cout<<"Program Menghitung Luas Bangun Datar dan Ruang\n\n";
      cout<<"1.Luas Segitiga\n";
      cout<<"2.Luas Kubus\n";
      cout<<"3.Luas Lingkaran\n";
      cout<<"4.Luas isi Bola\n";
      cout<<"\nPilih (1,2,3,4) :";cin>>pilih;
      cout<<"-----------------------------------\n";
      switch(pilih){
            case '1':
                  cout<<"*** Luas Segitiga ***\n\n";
                  cout<<"Masukkan nilai tinggi :";cin>>tinggi;
                  cout<<"Masukkan nilai alas :";cin>>alas;
                  LS=alas*tinggi/2;
                  cout<<"\nLuas segitiga tersebut :"<<LS;
                  break;
            case '2':
                  cout<<"*** Luas Kubus *****\n\n";
                  cout<<"Masukkan panjang sisi Kubus :";cin>>s;
                  LK= 6*s*s;
                  cout<<"\nLuas Kubus tersebut :"<<LK;
                  break;
            case '3':
                  cout<<"*** Luas Lingkaran ****\n\n";
                  cout<<"Masukkan Jari-Jari Lingkaran :";cin>>r;
                  LL=3.14*r*r;
                  cout<<"\nLuas Lingkaran tersebut :"<<LL;
                  break;
            case '4':
                  cout<<"*** Menghitung Luas dan Volume Bola ****\n\n";
                  cout<<"Masukkan Jari-Jari Bola :";cin>>jari_jari;
                  LB=4*3.14*jari_jari*jari_jari;
                  cout<<"\nLuas isi bola tersebut :"<<LB;
                  Volume=4/3*3.14*jari_jari*jari_jari*jari_jari;
                  cout<<"\nVolume isi bola tersebut :"<<Volume;
                  break;
            default :
                  cout<<"Pilihan anda tidak ada dalam sistem\n";
      }
      cout<<"\n\nKembali ke menu utama? (y/n) :";cin>>ulang;
  }
  while(ulang=='y'||ulang=='Y');
}
