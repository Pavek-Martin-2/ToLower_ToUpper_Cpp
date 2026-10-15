#include <iostream>
#include <string>
using namespace std;

// funkce ToUpper() a ToLower()

// funkce ToUpper()
string ToUpper(string txt_up) {
string out_up, znak_up;
int d_txt_up = txt_up.length();
for ( int i = 0 ; i <= d_txt_up -1; i++){
znak_up = txt_up.substr(i,1);
int ascii_hodnota_up = static_cast<int>(znak_up.at(0));
//cout<<ascii_hodnota_up<<endl; // smazat potom bylo kvuli pokusum z unicode
if ( ascii_hodnota_up >= 97 && ascii_hodnota_up <= 122 ){
out_up += (1, static_cast<char>(ascii_hodnota_up - 32));
}else{
out_up += znak_up;
}
}
return out_up;
} // konec funkce ToUpper()


// funkce ToLower()
string ToLower(string txt_lo) {
string out_lo, znak_lo;
int d_txt_lo = txt_lo.length();
for ( int y = 0 ; y <= d_txt_lo -1; y++){
znak_lo = txt_lo.substr(y,1);
int ascii_hodnota_lo = static_cast<int>(znak_lo.at(0));
//cout<<ascii_hodnota_lo<<endl; // smazat potom bylo kvuli pokusum z unicode
if ( ascii_hodnota_lo >= 65 && ascii_hodnota_lo <= 90 ){
out_lo += (1, static_cast<char>(ascii_hodnota_lo + 32));
}else{
out_lo += znak_lo;
}
}
return out_lo;
} // konec funkce ToLower()


int main(){

cout<<ToUpper("ABCDEFGHIJKLMNOPQRSTUVWXYZ")<<endl;
cout<<ToUpper("abcdefghijklmnopqrstuvwxyz")<<endl;
cout<<ToUpper("aBcDeFgH")<<endl;
cout<<ToUpper("iJkLmNoP")<<endl;
cout<<"-----------------------------"<<endl;
cout<<ToLower("abcdefghijklmnopqrstuvwxyz")<<endl;
cout<<ToLower("ABCDEFGHIJKLMNOPQRSTUVWXYZ")<<endl;
cout<<ToLower("aBcDeFgH")<<endl;
cout<<ToLower("iJkLmNoP")<<endl;
cout<<"-----------------------------"<<endl;
cout<<ToUpper("1234567890")<<endl;
cout<<ToLower("1234567890")<<endl;

// testovani
cout<<"zadej retezec pro funkci ToUpper() : ";
string u;
cin>>u;
cout<<ToUpper(u)<<endl<<endl;

cout<<"zadej retezec pro funkci ToLower() : ";
cin>>u;
cout<<ToLower(u)<<endl;

system("pause");
return 0;
}


