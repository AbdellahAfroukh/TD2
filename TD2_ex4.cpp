#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
    int taille;
    cout<<"Entrez la taille du tableau:";
    cin>> taille;
    int *tab1=new int[taille],i;
    cout <<"entrez"<<taille<<"entiers:";
    for ( i = 0; i < taille; i++)
    {
        cin>>tab1[i];
    }
    int *tab2=new int[taille];
    for ( i = 0; i < taille; i++)
    {
     tab2[i]=tab1[i]*tab1[i];
    }
     for ( i = 0; i < taille; i++){
        cout<<tab2[i]<<" ";
        cout<< endl; 
     }
     delete[] tab1;
     delete[] tab2;
     return 0;
}