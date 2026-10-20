#include <iostream>
#include <string>
#include <algorithm> // Pro std::transform
#include <cctype>    // Pro std::tolower
using namespace std;

// pokus unicode 2

int main() {
	
    string text = "Ahoj Svete 123!";
    //string text = "ìšèøıáíéÁÉÍÓÚ"; // naslo a psalo toto - ıÜR°×rßİÚ-+-Ë+
    
    // Transformace øetìzce na malá písmena pøímo na místì (in-place)
    transform(text.begin(), text.end(), text.begin(), [](unsigned char c) {
    return tolower(c);
    });

    cout << "Mala pismena: " << text << endl;
    
system("pause");
return 0;
}

