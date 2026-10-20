#include <iostream>
#include <algorithm> // radek - vector<wchar_t> buffer(needed_size + 1);
using namespace std;
 
// UTF-8 retezec s ceskou diakritikou

/*
tohle poradila AI, ja vtom Cecku moc neumim, tady si necham radit hodne
konecne se me podarilo rozhodit aby to prevadelo na male a velke pismo,
take tu ceskou diakritiku ktera me minule nafungovala
tohle funguje dobre pri spusteni pres zastupce (s parametren uvnitr)
v konczoli to bezi taky viz screenshoty
a bezi to i z davkoveho souboru z prikazem - set /p
*/

/*
ešcrıáíéuón
EŠCRİÁÍÉUÓN
eŠcRİáÍéUóN
"Pøíliš luouèkı kùò úpìl ïábelské ódy"
"Pøíliš luouèkı kùò úpìl ïábelské ódy. (123)"
*/
   
// pomocna funkce: prevod z UTF-8 (std::string) na siroky retezec (std::wstring)
wstring utf8_to_wstring(const string& str) {
if (str.empty()) return L"";
    
// zjisteni potrebne velikosti pro cílovy buffer
size_t needed_size = mbstowcs(nullptr, str.c_str(), 0);
if (needed_size == static_cast<size_t>(-1)) {
return L""; // neplatna UTF-8 sekvence
}
    
vector<wchar_t> buffer(needed_size + 1);
mbstowcs(buffer.data(), str.c_str(), buffer.size());
return wstring(buffer.data());
}

// pomocna funkce: prevod ze sirokeho retezce (wstring) zpet na UTF-8 (string)
string wstring_to_utf8(const wstring& wstr) {
if (wstr.empty()) return "";
    
// zjisteni potrebne velikosti pro cilovy buffer
size_t needed_size = wcstombs(nullptr, wstr.c_str(), 0);
if (needed_size == static_cast<size_t>(-1)) {
return ""; // neplatny siroky retezec
}
    
vector<char> buffer(needed_size + 1);
wcstombs(buffer.data(), wstr.c_str(), buffer.size());
return string(buffer.data());
}

int main(int argc, char** argv){
	
// kontrola poctu argumentu
if (argc != 2) { // prave 2 [0], [1]
cout<<endl<<argv[0]<<" unicode_text"<<endl;
system("pause");
return 1;
}
string utf8_text = argv[1];

// nastavime globalni locale podle systemu (klicové pro spravnou konverzi a diakritiku)
locale::global(locale(""));
// nastaveni C knihoven na systemove locale, aby fungovalo mbstowcs/wcstombs
setlocale(LC_ALL, "");
    

// 1. krok: prevod z UTF-8 na siroku retezec (wstring) pomoci nove funkce
wstring wide_text = utf8_to_wstring(utf8_text);

// 2. krok: ziskani locale facet pro siroke znaky
const auto& facet = use_facet<ctype<wchar_t>>(locale());

// prevod na velka pismena
wstring wide_upper = wide_text;
transform(wide_upper.begin(), wide_upper.end(), wide_upper.begin(), [&](wchar_t c) {
return facet.toupper(c); 
});   
string utf8_upper = wstring_to_utf8(wide_upper); // prevod zpet na UTF-8

// prevod na mala pismena
wstring wide_lower = wide_text;
transform(wide_lower.begin(), wide_lower.end(), wide_lower.begin(), [&](wchar_t c) {
return facet.tolower(c); 
});
string utf8_lower = wstring_to_utf8(wide_lower); // prevod zpet na UTF-8


// vypis vysledku
cout<<endl<<"argv[1] = "<<utf8_text<<endl;
cout<<"utf8_upper "<<utf8_upper<<endl;
cout<<"utf8_lower "<<utf8_lower<<endl;


system("pause");
return 0;
}

