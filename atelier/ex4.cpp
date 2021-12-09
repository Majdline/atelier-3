#include <iostream>
using namespace std;

class mere
{
public:
    void display(){ // methode
        cout<<"je suie la mere"<<endl;
    }

};
class fille: public mere
{
public:
    void display(){
        cout<<"je suis la fille"<<endl;
    }
};

int main(){
    fille f; // objet
    f.display();
    return 0;
}