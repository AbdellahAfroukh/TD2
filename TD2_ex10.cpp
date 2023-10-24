#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
class personne{
    private:
    string Nom;
    string Prenom;
    string DateDeNaissance;
    public:
    personne(string n,string p,string d){
        Nom=n;
        Prenom=p;
        DateDeNaissance=d;
    }
    void affiche(){
        cout<<"Nom: "<<Nom<<endl;
        cout<<"Prenom: "<<Prenom<<endl;
        cout<<"Date de naissance: "<<DateDeNaissance<<endl;
    }
};
class employer : public personne{
    private:
    double Salaire;
    public:
    employer(string n,string p,string d,double sa):personne(n,p,d){
        personne(n,p,d);
        Salaire=sa;
    }
    void affiche(){
        personne::affiche();
        cout<<"Salaire: "<<Salaire<<"DH"<<endl;
    }
};
class chef :public employer{
    private:
    string Service;
    public:
    chef(string n,string p,string d,double sa,string se):employer(n,p,d,sa){
        employer(n,p,d,sa);
        Service=se;
    }
    void affiche(){
        employer::affiche();
        cout<<"Service: "<<Service<<endl;
    }
};
class directeur : public chef{
    private:
    string Societe;
    public:
    directeur(string n,string p,string d,double sa,string se,string so):chef(n,p,d,sa,se){
        chef(n,p,d,sa,se);
        Societe=so;
    }
    void affiche(){
        chef ::affiche();
        cout<<"societe: "<<Societe<<endl;
    }
};
int main(){
    cout<<"*******informations de la personne:*******"<<endl;
     personne p("Afroukh", "Abdellah", "27/10/2002");
     p.affiche();
     cout<<"*********Informations du chef:********"<<endl;
     chef c("Afroukh", "Abdellah", "27/10/2002", 75000, "C++");
     c.affiche();
 return 0; 
}
