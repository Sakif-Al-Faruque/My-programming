#include <iostream>

using namespace std;

class Coord{
    int a, b;
    public:
        Coord(){}
        Coord(int, int);
        friend ostream& operator<<(ostream &stream, Coord samp);
        friend istream& operator>>(istream &stream, Coord &samp);
};

Coord::Coord(int a, int b){
    this->a = a;
    this->b = b;
}

ostream& operator<<(ostream &stream, Coord samp){
    stream<<"a = "<<samp.a<<" ... b = "<<samp.b<<endl;
    return stream;
}

istream& operator>>(istream &stream, Coord &samp){ //accept the reference of the object
    cout<<"Enter values: ";
    stream>>samp.a>>samp.b;
    return stream;
}

int main(){
    Coord c1, c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}