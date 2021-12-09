#include <iostream>
#include <string>
using namespace std;
class Test {
public:

	void call() { // methode
		cout << " bonjour : " << endl;
		static  int count = 0;
		count++;
		cout << count << endl;
	}
};
int main() {
	Test c;
	c.call(); // l appel du methode 
	c.call();
	c.call();
	c.call();
	c.call();
	return 0;

}

