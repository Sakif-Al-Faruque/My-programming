#include <iostream>
#include "from.h" //bring code from other file
#define SOMETHING true //make constant
#if SOMETHING
#define MESSAGE 0
#endif

#ifdef MESSAGE
#define HUHA "huha"
#endif

#define MYFUNC(a, b) cout<< "num-1 is: "#a" and num-2 is "#b<<endl //stringize operator
#define MYFUNC1(n) cout<<"Here this, "#n " and "<<k##n

using namespace std;

int main(){
    //customized macros with micro
    cout<<SOMETHING<<endl;
    cout<<MESSAGE<<endl;
    cout<<HUHA<<endl;

    //predifined macros
    cout<<"File name: "<<__FILE__<<endl;
    cout<<"Date: "<<__DATE__<<endl;
    cout<<"Time: "<<__TIME__<<endl;

    MYFUNC(10, 20);
    int k10 = 20;
    MYFUNC1(10);

    return 0;
}