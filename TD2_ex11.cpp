#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

class vecteur{
    private:
    float composante1;
    float composante2;
    float composante3;
    public:
    vecteur(float c1=0,float c2=0,float c3=0){
        composante1=c1;
        composante2=c2;
        composante3=c3;
    }
    static void affiche(){
        vecteur v;
        cout<<"("<<v.composante1<<";"<<v.composante2<<";"<<v.composante3<<")"<<endl;
    }
    static vecteur somme(vecteur v1,vecteur v2){
        static vecteur v3;
    v3.composante1=v1.composante1+v2.composante1;
    v3.composante2=v1.composante2+v2.composante2;
    v3.composante3=v1.composante3+v2.composante3;
    return v3;
    }
    static float produit(vecteur v1,vecteur v2){
        return (v1.composante1*v2.composante1+v1.composante2*v2.composante2+v1.composante3*v2.composante3);
    }
    static float norme(vecteur v){
        return sqrt(v.composante1*v.composante1+v.composante2*v.composante2+v.composante3*v.composante3);
    }
};
int main(){
    vecteur v1(1.0,2.0,3);
    vecteur v2(4,5,6);
    v1.affiche();
    return 0;
}