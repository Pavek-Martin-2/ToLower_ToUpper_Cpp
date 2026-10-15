#include <iostream>
#include <string.h> // strlen()
using namespace std;

// funkce ToLower() pomoci, tolower();

int main(int argc, char** argv){

// kontrola poctu argumentu
if (argc != 2) { // prave 2
cout<<endl<<"funkce ToLower()"<<endl;
cout<<argv[0]<<" string"<<endl;
return 1; // chyba
}

int length, i;
char *string = argv[1];
length = strlen(string);

for (i = 0; i < length; i++) {
if ((string[i] >= 'A') && (string[i] <= 'Z')){ // A-Z
// kdyz se mu zakometuje takle podminka a pustej se mu vsechny znaky tak unicode prevadet NEUMI
string[i] = tolower(string[i]); // interni funkce tolower()
}
}

cout<<string<<endl;
system("pause");
return 0;
}

