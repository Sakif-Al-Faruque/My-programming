#include <iostream>
#include <cstring>

using namespace std;

//manipulators for output
ostream &setup(ostream &stream){
    stream.width(10);
    stream.precision(4);
    stream.fill('#');

    return stream;
}

//manipulators for output
ostream &atn(ostream &stream){
    stream<<"Attention! : ";
    return stream;
}

//manipulators for output
ostream &note(ostream &stream){
    stream<<"Please note that: ";
    return stream;
}

//manipulators for input
istream &getpass(istream &stream){
    cout<<'\a';
    cout<<"Please enter a password: ";
    return stream;
}

int main(){
    //manipulators for output
    cout<<setup<<123.232<<endl;
    cout<<atn<<"I'm gonna tell you something...."<<endl;
    cout<<note<<"Earth is smaller than sun...."<<endl;

    //manipulators for input
    string str;
    cin>>getpass>>str;

    cout<<"your password is: "<<str<<endl;
    return 0;
}
