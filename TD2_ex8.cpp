#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

class complexe{
public:
float Reel,Img;
complexe(float R,float I){
    Reel=R;
    Img=I;
}
complexe addition(complexe complexe1,complexe complexe2){
complexe complexe3(0,0);
complexe3.Reel=complexe1.Reel+complexe2.Reel;
complexe3.Img=complexe1.Img+complexe2.Img;
return complexe3; 
}
complexe soustraction(complexe complexe1,complexe complexe2){
complexe complexe3(0,0);
complexe3.Reel=complexe1.Reel-complexe2.Reel;
complexe3.Img=complexe1.Img-complexe2.Img;
return complexe3; 
}
complexe multiplication(complexe complexe1,complexe complexe2){
complexe complexe3(0,0);
complexe3.Reel=complexe1.Reel*complexe2.Reel-complexe1.Img*complexe2.Img;
complexe3.Img=complexe1.Reel*complexe2.Img+complexe1.Img*complexe2.Reel;
return complexe3; 
}
void affiche(complexe complexe3){
if (complexe3.Img<0)
{
  cout<<"le nombre complexe est:"<<complexe3.Reel<<"- i"<<-complexe3.Img;
}
else{cout<<"le nombre complexe est:"<<complexe3.Reel<<"+ i"<<complexe3.Img;}

}
    
};
int main(){
    complexe complexe1(0,0),complexe2(0,0),complexe3(0,0);
    cout<<"entrer le reel du nombre 1:";
    cin>>complexe1.Reel;
        cout<<"entrer l'imaginaire du nombre 1:";
    cin>>complexe1.Img;
        cout<<"entrer le reel du nombre 2:";
    cin>>complexe2.Reel;
        cout<<"entrer l'imaginaire du nombre 2:";
    cin>>complexe2.Img;
   int choix;
   error:
   cout<<"enter une operation:"<<endl;
   cout<<"1) egalite."<<endl;
   cout<<"2) addition"<<endl;
   cout<<"3) soustarction"<<endl;
   cout<<"4) multiplication"<<endl;
   cin>>choix;
   switch (choix)
   {
   case 1:
    if(complexe1.Reel==complexe2.Reel && complexe1.Img==complexe2.Img){
        cout<<"il y a egalite.";
    }
    else{
        cout<<"pas d'egalite.";
    }
    break;
    case 2:
    complexe3.affiche(complexe3.addition(complexe1,complexe2));
    break;
     case 3:
    complexe3.affiche(complexe3.soustraction(complexe1,complexe2));
    break;
     case 4:
    complexe3.affiche(complexe3.multiplication(complexe1,complexe2));
    break;
   default:
   goto error;
    break;
   }
return 0;
}