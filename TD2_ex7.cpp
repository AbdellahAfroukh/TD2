#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
    int tab[10];
    int i,j,n;
    for ( i = 0; i < 10; i++)
    {
    cout<<"entrer le nomrbre "<<(i+1)<<":";
    cin>>tab[i];
    }
    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++)
        {
         if (tab[j]>tab[j+1])
         {
         n=tab[j];
         tab[j]=tab[j+1];
         tab[j+1]=n;
         }
         
        }
        
    }
    for(j=0; j<10 ; j++){
        cout<<j+1<<")"<<tab[j]<<endl;
    }

    return 0;
}