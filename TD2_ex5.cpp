#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
    int a;
    int &ref_a = a;
    int *p_a = &a;
    cout<<"entrer une valeur de a:"<<endl;
    cin>>a;
    cout<<"la valeur de a est:"<<a<<endl;
    cout<<"la reference de a est:"<<ref_a<<endl;
    cout<<"l'adresse de a est:"<<&a<<endl;
    cout<<"l'adresse de ref_a est:"<<&ref_a<<endl;
    cout<<"la valeur pointee par p_a est:"<<*p_a<<endl;
    cout<<"p_a pointe a l'adresse:"<<p_a;
return 0;
}