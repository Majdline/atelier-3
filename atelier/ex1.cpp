#include <iostream>

using namespace std;

class myclass {
public:
    myclass(); // constructeur
    ~myclass(); // destructeur
};
string nom;

myclass::myclass() { // constructeur 
    cout << "enter votre nom:" << endl;
}
myclass::~myclass() { // destructeur 
    cin >> nom; // il fait entrer la variable 
    cout << "bonjour " << nom << endl;
    cout << "au revoir " << nom << endl;
}
int main()
{
    myclass p; // declaration d un objet 
    return 0;
} 

