#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

class animal{
    public:
    void set_value(string n,int a){
        nom=n;
        age=a;
    }
protected:
    string nom;
    int age;
};
class zebra : public animal{
    public:
    string origine;
    zebra(string n,int a,string o){
        set_value(nom,age);
        origine=o;
    }
    void affiche(){
cout<<"le zebra "<<nom<<" a "<<age<<" ans et il est d'origine:"<<origine<<endl;
    }
};
class dolphin : public animal{
    public:
    string origine;
    dolphin(string n,int a,string o){
        set_value(nom,age);
        origine=o;
    }
    public:
    void affiche(string origine){
cout<<"le dolphin "<<nom<<" a "<<age<<" ans et il est d'origine:"<<origine;
    }
};
int main(){
   zebra z(0,0,0);
   dolphin d(0,0,0);
   string nz,nd,oz,od;
   int az,zd;
   cin>>nz;
   cin>>az;
   cin>>oz;
   z.set_value(nz,az);
   z.affiche();
   
    

    return 0;
}