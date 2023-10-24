#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void incrementer(int *n){
    (*n)++;
}
void permuter(int *a,int *b){
    int p =*a;
    *a=*b;
    *b=p;
}
void ref(int &a,int &b){
    int p=a;
    a=b;
    b=p;
}
int main(){
    int a,b;
    cout<<"entrez une valeur de a:"<<endl;
    cin>>a;
    cout<<"entrez une valeur de b:"<<endl;
    cin>>b;
    incrementer(&a);
    cout<<"nouvelle valeur de a est:"<<a<<endl;
    permuter(&a,&b);
    cout<<"nouvelle valeur de a est:"<<a<<",et la nouvelle valeeur de b est:"<<b<<endl;
    ref(a,b);
    cout<<"valeur finale de a:"<<a<<endl;
    cout<<"valeur finale de b:"<<b<<endl;


    return 0;
}