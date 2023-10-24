#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

class test{
    public:
    static int n;
    void call(){
        n++;
    }
};
int test::n=0;
int main(){
    test t;
    t.call();
    t.call();
    t.call();
    cout<<"la fonction call a ete appelee "<<test::n<<" fois";
    return 0;

}   