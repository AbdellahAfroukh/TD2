#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
class date
{
private:
    string jour;
    string mois;
    string annee;
    string heure;
    string minute;
public:
   date(string n){
    if(n.length()!=12){
        cout<<"error"<<endl;
    }
    jour=n.substr(0,2);
    mois=n.substr(2,2);
    annee=n.substr(4,4);
    heure=n.substr(8,2);
    minute=n.substr(10,2);
   }
   void affiche(){
    cout<<"Jour :"<<jour<<endl;
    switch (mois)
    {
    case 01:
        cout<<"Mois: Janvier"<<endl;
        break;
    case 02:
        cout<<"Mois: Fevrier"<<endl;
        break;
    case 03:
        cout<<"Mois: Mars"<<endl;
        break;
    case 04:
        cout<<"Mois: Avril"<<endl;
        break;
    case 05:
        cout<<"Mois: Mai"<<endl;
        break;
    case 06:
        cout<<"Mois: Juin"<<endl;
        break;
    case 07:
        cout<<"Mois: Juillet"<<endl;
        break;
    case 08:
        cout<<"Mois: Aout"<<endl;
        break;
    case 09:
        cout<<"Mois: Septembre"<<endl;
        break;
    case 10:
        cout<<"Mois: Octobre"<<endl;
        break;
    case 11:
        cout<<"Mois: Novembre"<<endl;
        break;
    case 12:
        cout<<"Mois: Decembre"<<endl;
        break;
    
    
    
    default:
        break;
    }
    cout<<"Annee: "<<annee<<endl;
    cout<<"heure et minutes: ("<<heure<<"/"<<minute<<")"<<endl;
   }
};

int main()<{
    string X;
    cout<<"entre votre nombre:";
    cin>>X;
    date date(X);
    date.affiche();
    return 0;
}
