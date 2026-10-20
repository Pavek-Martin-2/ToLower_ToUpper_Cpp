#include <iostream>
#include <string>
#include <algorithm> // Pro std::transform
#include <cctype>    // Pro std::toupper
using namespace std;

// pokus unicode NEJDE

int main() {
	
    string text = "Ahoj Svete 123!";
    //string text = "ìšèøıáíéÁÉÍÓÚ"; // neslo a psalo toto - ıÜR°×rßİÚ-+-Ë+
    
    // Transformace øetìzce na velká písmena pøímo na místì (in-place)
    transform(text.begin(), text.end(), text.begin(), [](unsigned char c) {
        return toupper(c);
    });

    cout << "Velka pismena: " << text << endl;

    system("pause");
    return 0;
}

