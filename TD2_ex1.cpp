#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

class NombreDeFois{
    public:
    static int affiche() {
        static int n= 0;
        n++;
        cout<< "appel numéro"<< n << endl;
    }
};
int main(){
    NombreDeFois::affiche();
    NombreDeFois::affiche();
    NombreDeFois::affiche();
    return 0;
}