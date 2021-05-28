//inserters
#include <iostream>

using namespace std;

class Coord{
    //int a, b;
    public:
        int a, b;
        Coord(int a, int b);
        //friend ostream &operator<<(ostream &stream, Coord samp);
};

Coord::Coord(int a, int b){
    this->a = a;
    this->b = b;
}

ostream& operator<<(ostream &stream, Coord samp){
    stream<<"a = "<<samp.a<<" ... b = "<<samp.b<<endl;
    return stream;
}

int main(){
    Coord c1(10, 20), c2(50, 60);
    cout<<c1<<c2<<endl;
    return 0;
}