#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
    int tab[10];
    int *p=tab,i;
    for ( i = 0; i < 10; i++)
    {
    cout<<"entrez un nombre:";
    cin>>*p;
    *p++;
    }
    p=tab;
    int min=*p;
    int max=*p;
    for ( i = 1; i <10; i++)
    {
       p++;
       if (*p<min)
       {
       min=*p;
       }
       if (*p>max)
       {
       max=*p;
       }
       
    }
    cout<<"le plus petit nombre est:"<<min<<endl;
    cout<<"le plus grand nombre est:"<<max<<endl;
    return 0;
    
    
}