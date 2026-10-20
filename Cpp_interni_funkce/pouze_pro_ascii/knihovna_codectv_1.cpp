#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
#include <codecvt>  // Dostupné od C++11 pro pøevod UTF-8 <-> UTF-16/32
#include <cwctype>  // Pro std::towupper a std::towlower

// C++ verze 11, ale nejde protoze chyby knihovna <codecvt>

int main() {
    // Nastavíme globální locale podle systému (dùleité pro správné rozpoznání diakritiky)
    std::locale::global(std::locale(""));
    
    // Vstupní UTF-8 øetìzec s èeskou diakritikou
    std::string utf8_text = "Pøíliš luouèkı kùò úpìl ïábelské ódy. (123)";

    // C++11 konvertor mezi std::string (UTF-8) a std::wstring
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    
    // 1. Krok: Pøevod z UTF-8 na širokı øetìzec (wstring)
    std::wstring wide_text = converter.from_bytes(utf8_text);

    // 2. Krok: Získání locale facet pro široké znaky
    const auto& facet = std::use_facet<std::ctype<wchar_t>>(std::locale());

    // --- PØEVOD NA VELKÁ PÍSMENA ---
    std::wstring wide_upper = wide_text;
    std::transform(wide_upper.begin(), wide_upper.end(), wide_upper.begin(), [&](wchar_t c) {
        return facet.toupper(c); // Pøípadnì lze pouít std::towupper(c)
    });
    std::string utf8_upper = converter.to_bytes(wide_upper); // Pøevod zpìt na UTF-8

    // --- PØEVOD NA MALÁ PÍSMENA ---
    std::wstring wide_lower = wide_text;
    std::transform(wide_lower.begin(), wide_lower.end(), wide_lower.begin(), [&](wchar_t c) {
        return facet.tolower(c); // Pøípadnì lze pouít std::towlower(c)
    });
    std::string utf8_lower = converter.to_bytes(wide_lower); // Pøevod zpìt na UTF-8

    // Vıpis vısledkù
    std::cout << "Original: " << utf8_text << std::endl;
    std::cout << "VELKA:    " << utf8_upper << std::endl;
    std::cout << "mala:     " << utf8_lower << std::endl;

    return 0;
}

