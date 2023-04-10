#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>


using namespace std;

 class Otopark
 {
    
    private:
    int saat;
    int secim;
    int aracCinsi;
    int toplamUcret;
    
    void hesapla();

    public:

    void menu();


 };

  void Otopark:: hesapla()

  {
     
     cout<<"Saat :" ;
     cin>>saat;

     if (aracCinsi == 1)

     {
        toplamUcret = 20 + saat *4;
        
     }

     else if (aracCinsi == 2)

     {

        toplamUcret = 30 + saat *6;
        
     }

     else if (aracCinsi == 3)

     {

        toplamUcret= 40 + saat *8;
  
     }

     else if (aracCinsi == 4)

     {
            
            toplamUcret = 50 + saat *10;
            
        }
    
        else if (aracCinsi == 5)
    
        {
    
            toplamUcret = 60 + saat *12;
            
        
        }

        else if (aracCinsi == 6)

        {
            
            toplamUcret = 70 + saat *14;
            
        }



      system("cls");
      system("color 0a");
      cout<<"Toplam Ucret: "<<toplamUcret<<" TL "<<endl<<endl;

      system("pause");

  }

  void Otopark:: menu()

  {
     
     while(true)

     {
         
         system("cls");

         cout<<"OTOPARK UYGULAMASI"<<endl<<endl;
         cout<<"ARAC CINSI SECINIZ"<<endl<<endl;
         cout<<"[1] TAKSI"<<endl;
         cout<<"[2] Minubus"<<endl;
         cout<<"[3] Ticari Arac"<<endl;
         cout<<"[4] Motorsiklet"<<endl;
         cout<<"[5] Tanker(Petrol)"<<endl;
         cout<<"[6] Kamyonet"<<endl;
         cout<<"[0] Cikis"<<endl<<endl;
         cout<<"Seciminiz: ";
         cin>>secim;

         if ( secim == 0)
         {
            cout<<"Cikis yapiliyor..."<<endl;
            break;
            
         }

         else if ( secim >0 && secim <7)
         {
            aracCinsi = secim;
            hesapla();
            
         }

     }

  }

  int main()

  {

    Otopark nesne1;
    nesne1.menu();


    return 0;

  }



  










  