#include  <iostream>
using namespace  std ;

int  main ()
{

struct  mahasiswa
{

char npm [ 15 ];
char nama [ 30 ];
char alamat [ 50 ];
};


mahasiswa mhs [ 3 ];


for (int i = 0 ; i < 3 ; i ++)
 {
cout << " Nama: " ; cin >> mhs [i]. nama ;
cout << " Npm: " ; cin >> mhs [i]. npm ;
cout << " Alamat: " ; cin >> mhs [i]. alamat ;
}


for ( int i = 0 ; i < 3 ; i ++)
{
cout << " ~~ ========================= ~~ \ n " ;
cout << " Npm Anda: " << mhs [i]. npm << endl;
cout << " Nama Anda: " << mhs [i]. nama << endl;
cout << " Alamat Anda: " << mhs [i]. alamat << endl;
}

 
 return  0 ;
}
