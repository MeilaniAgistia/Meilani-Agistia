#include <iostream>
using namespace std;

int main(){
  string username = "";
  string password = "";
  cout<<"====halaman registrasi===="<<"\n";
  cout<<"username =";cin>>username;
  cout<<"password =";cin>>password;
if(username == "Meilani"){
  if(password == "Anggi"){
    cout<<"====selamat login===="<<"\n";
  }else{
    cout<<"username salah"<<"\n";
 }
  }else{
    cout<<"password salah"<<"\n";  
  }
   return 0;
}




