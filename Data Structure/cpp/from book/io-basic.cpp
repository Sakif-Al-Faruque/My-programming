#include <iostream>
#include <iomanip>

using namespace std;

void showFlags();

int main(){
    cout<<121.23<<" hello "<<100<<endl;
    cout<<10<<" "<<-10<<endl;
    cout<<100<<endl<<endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::hex | ios::scientific);
    cout<<121.23<<" hello "<<100<<endl;

    cout.setf(ios::showpos | ios::dec);
    cout<<10<<" "<<-10<<endl;

    cout.setf(ios::showpoint | ios::fixed);
    cout<<100<<endl<<endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::uppercase | ios::showbase | ios::hex);
    cout<<88<<endl;

    cout.unsetf(ios::uppercase | ios::showbase);
    cout<<88<<endl<<endl;

    //special functions of streams
    cout.width(10);
    cout.fill('#');
    cout.setf(ios::left);
    cout<<"Hello"<<endl<<endl;

    cout.precision(6);
    cout.unsetf(ios::scientific);
    cout<<12.455565685487<<endl;

    //manipulators
    cout<<oct<<100<<hex<<100<<endl;
    cout<<setw(10)<<setfill('%')<<200<<endl;

    cout<<endl<<endl;
    showFlags(); //showing current output format
    return 0;
}

void showFlags(){
    ios::fmtflags f;

    f = cout.flags();

    if(f & ios::skipws) cout<<"skipws is on"<<endl;
    else cout<<"skipws is off"<<endl;

    if(f & ios::left) cout<<"left is on"<<endl;
    else cout<<"left is off"<<endl; 

    if(f & ios::right) cout<<"right is on"<<endl;
    else cout<<"right is off"<<endl;

    if(f & ios::internal) cout<<"internal on"<<endl;
    else cout<<"intenal off"<<endl;

    if(f & ios::dec) cout<<"dec on"<<endl;
    else cout<<"dec off"<<endl;

    if(f & ios::oct) cout<<"oct on"<<endl;
    else cout<<"oct off"<<endl;

    if(f & ios::showbase) cout<<"showbase on"<<endl;
    else cout<<"showbase off"<<endl;

    if(f & ios::hex) cout<<"hex on"<<endl;
    else cout<<"hex off"<<endl;

    if(f & ios::showpoint) cout<<"showpoint on"<<endl;
    else cout<<"showpoint off"<<endl;

    if(f & ios::showpos) cout<<"showpos on"<<endl;
    else cout<<"showpos off"<<endl;

    if(f & ios::uppercase) cout<<"uppercase on"<<endl; 
    else cout<<"uppercase off"<<endl;

    if(f & ios::scientific) cout<<"scientific on"<<endl;
    else cout<<"scienitific off"<<endl;

    if(f & ios::fixed) cout<<"fixed on"<<endl;
    else cout<<"fixed off"<<endl;

    if(f & ios::unitbuf) cout<<"unitbuf on"<<endl;
    else cout<<"unitbuf off"<<endl;

    if(f & ios::boolalpha) cout<<"boolalpha on"<<endl;
    else cout<<"boolalpha off"<<endl;
}