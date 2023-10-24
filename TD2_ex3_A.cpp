#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
    int tab[10];
    int i;
    for (i=0;i<10;i++){
        cout<<"entez un nombre :";
        cin>> tab[i];
    }
    int min = tab[0];
    int max = tab[0];
    for(i=1;i<10;i++){
        if (tab[i]<min)
        {
          min=tab[i];
        }
         if (tab[i]>max)
        {
          max=tab[i];
        }
    }
    cout<< "le plus petit nombre est:"<< min<<endl;
    cout<< "le plus grand nombre est:"<< max<<endl;
    return 0;
}