#include <iostream>
#include <string>
using namespace std;

int main()
{
    int belanja;
    int batas_diskon= 1102019;
    int harga ;

    cout << "\nMasukkan status anda (jomblo 'j' atau pacaran 'p') : ";
    string status;
    cin >> status;
    cout << "apakah anda mempunyai kartu member (ya atau tidak):" ;
    string kartu_member;
    cin >> kartu_member;
    cout <<"total belanja:";
    cin>>belanja ;

    if (status=="j" && belanja>=batas_diskon)
    {
        if (kartu_member=="Ya")
        {
        cout <<"diskon 50%"<<endl;
        harga = belanja-(belanja-0.5);
        }
        else
        {
        cout<<"diskon 25%"<<endl ;
        harga = belanja- (belanja-0.25);
        }
    }else{
         if (kartu_member=="tidak" && belanja>=batas_diskon)
        {
        cout << "diskon 25%"<<endl;
        harga  = belanja- (belanja  * 0.25);
        }else{
        cout<<"diskon 10%"<<endl;
        harga  =belanja- (belanja *0.1);
        }
    }
   cout<<"total harga yang dibayar hanya :" << harga  <<endl;
if (status=="j")
{
    cout <<"Segeralah mencari" <<endl;
}
else
{
    cout <<"lanjutkan"<<endl;
}
return 0;
}