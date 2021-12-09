
#include <iostream>
using namespace std;

class Animal
{
public:
    int age; string name;
    void set_value(int a = 0, string b = "") { // methode 
        age = a;
        name = b;
    }

};
class Zebra : public Animal // class zebra herite de class Animal  
{
public:
    string lieuDorigine = "afrique";
    void display() { // methode affiche les informations 
        cout << "l'age de ce zebra est" << age << endl;
        cout << "le nome de ce zebra est" << name << endl;
        cout << "le lieu d'origine de ce animale est" << lieuDorigine << endl;
    }
};

class Dolphin : public Animal
{
public:
    string lieuDorigine = "atlantique";
    void display() {
        cout << "l'age de Dolphin est" << age << endl;
        cout << "le nome de Dolphin  est" << name << endl;
        cout << "le lieu d'origine de ce animale est" << lieuDorigine << endl;
    }
};

int main() {
    Zebra z; //objet
    Dolphin d;
    z.set_value(46, "mariam"); // l appel de methode 
    d.set_value(40, "kawtar");
    z.display();
    d.display();
    return 0;
}