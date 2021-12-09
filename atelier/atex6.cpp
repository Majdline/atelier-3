#include <string>
#include <iostream>
#include <string>

using namespace std;

class Personne
{
private: // les variables prive 
    string nom;
    string prenom;
    string datenaissance;

public:
    //ces methodes sont utulise pour rendre les var public 
    string getNom();
    void setNom(string value);
    string getPrenom();
    void setPrenom(string value);
    string getDatenaissance();
    void setDatenaissance(string value);

    Personne(string n, string p, string dn); // constructeur parametrique 

    virtual void Afficher();// on a utilise la virtuel void pour la redifinit 
};
class Employe : public Personne // class employe herite de class personne 
{
private:
    double salaire = 0;

public:
    double getSalaire();
    void setSalaire(double value);

    Employe(const string n, const string p, string dn, double s); // polymorphe 

    void Afficher() override;  // methode 
};
class Chef : public Employe // class chef herite de class employe 
{
private:
    string service;

public:
    string getService();
    void setService(string value);

    Chef(string n, string p, string dn, double s, string ser); //polymorphe 

    void Afficher() override; // remplacement d'une méthode d'une classe de base
};
class Directeur : public Chef // class Directeur herite de class chef 
{
private:
    string societe;

public:
    string getSociete(); // methode 
    void setSociete(string value);

    Directeur(string n, string p, string dn, double s, string ser, string soc);

    void Afficher() override;
};

string Personne::getNom()
{
    return nom;
}

void Personne::setNom(string value)
{
    nom = value;
}

string Personne::getPrenom()
{
    return prenom;
}

void Personne::setPrenom(string value)
{
    prenom = value;
}

string Personne::getDatenaissance()
{
    return datenaissance;
}

void Personne::setDatenaissance(string value)
{
    datenaissance = value;
}

Personne::Personne(string n, string p, string dn) // constructeur 
{
    nom = n;
    prenom = p;
    datenaissance = dn;
}

void Personne::Afficher() // l affichage des variables de class personne 
{
    cout << "Nom: " << nom << " Prénom: " << prenom << " Date de naissance: " << datenaissance;
}

double Employe::getSalaire()
{
    return salaire;
}

void Employe::setSalaire(double value)
{
    salaire = value;
}

Employe::Employe(string n, string p, string dn, double s) : Personne(n, p, dn)
{
    salaire = s;
}

void Employe::Afficher()
{
    Personne::Afficher();
    cout << " Salaire: " << salaire << endl;
}

string Chef::getService()
{
    return service;
}

void Chef::setService(string value)
{
    service = value;
}

Chef::Chef(string n, string p, string dn, double s, string ser) : Employe(n, p, dn, s)
{
    service = ser;
}

void Chef::Afficher()
{
    Employe::Afficher(); // constructeur 
    cout << " Service: " << service;
}

string Directeur::getSociete()
{

    return societe;
}

void Directeur::setSociete(string value)
{
    societe = value;
}

Directeur::Directeur(string n, string p, string dn, double s, string ser, string soc) : Chef(n, p, dn, s, ser)
{
    societe = soc;
}

void Directeur::Afficher()
{
    Chef::Afficher();
    cout << " Société: " << societe;
}

int main() {
    Directeur d("majdouline", "maimouni", "2001", 100000, "rapport", "MarocTelecom"); // obj 
    d.Afficher(); // l appel de methode afficher ()
    return 0;
}
