#include <iostream>
using namespace std;
class Media
{
public:
    Media() {}; // constructeur
    string titre;
    virtual void imprime()  { // methode
        std::cout << "bonjour c est majdouline" << std::endl;
    };
    char* id(char a); // methode 
};
class Livre : public Media // class herite  de class media
{
public:
    Livre() {};
    string auteur;
};
class audio : public Livre  // class herite  de class live
{
public:
    audio() {};
    string vocale;
};
class cd : public audio // class herite  de class audio
{
public:
    cd() {};
    string ecoute;
};
class casette : public audio
{
public:
    casette() {};
    string protege;
};
class disque : public audio
{
public:
    disque() {};
    string stocke;
};
class presse : public Media // // class herite  de class media
{
public:
    presse() {};
    string papier;
};
class magazine : public presse // class herite  de class presse
{
public:
    magazine() {};
    string publication;
};
class journal : public presse
{
public:
    journal() {};
    string periodique;
};
class revue : public presse
{
public:
    revue() {}; // constructeur
    string precis; // attribut
};
int main()
{
    disque m; // objet
    Livre n;
    magazine l;
    m.imprime();
    n.imprime(); //appel de methode 
    l.imprime();
    return 0;
}
