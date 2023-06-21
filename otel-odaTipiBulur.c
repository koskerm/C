
#include<stdio.h>


int main()
{
  char odaTipi[5];
  char ad[50];
  int ucret;
  int gunSayisi;
  int tutar;
  
  
  //cout<<"\n oda tipi "<<odaTipi;
  cout<<"\n ad"<<endl;
  cout<<"\n ucret"<<endl;
  cout<<"gun sayisi"<<gunSayisi<<endl;
  
  if(ucret>=1000)
  
  	cout<<"Luks odadair"<<endl;
  
  else 
    
    cout<<"Normal odadir"<<endl;
  
  tutar=(gunSayisi*ucret);
  
  cout<<"Toplam tutar="<<tutar;
  
  return 0;
}

