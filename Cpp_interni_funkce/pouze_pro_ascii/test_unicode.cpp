#include <iostream>
#include <string.h> // strlen()
using namespace std;

// funkce ToUpper() pomoci, toupper();

int main(int argc, char** argv){

// kontrola poctu argumentu
if (argc != 2) { // prave 2
cout<<endl<<"test prevodu unicode znaku"<<endl;
cout<<argv[0]<<" unicode"<<endl;
system("pause");
return 1; // chyba
}

int length, i;
char *string = argv[1];
length = strlen(string);

for (i = 0; i < length; i++) {
// pusti vsechny znaky i pripadne Unicode
string[i] = toupper(string[i]); // interni funkce toupper()
}

cout<<string<<endl;
system("pause");
return 0;
}


