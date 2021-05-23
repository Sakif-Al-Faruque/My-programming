#include <iostream>

using namespace std;

class Complex{
    int x, y;
    public:
        Complex(){x = 0; y = 0;}
        Complex(int x, int y){
            this->x = x;
            this->y = y;
        }
        Complex operator+(Complex);
        Complex operator-();
        Complex operator++();
        Complex operator++(int);

        //multiplication operator overloading with friend function
        friend Complex operator*(Complex, Complex);

        //relational operator and logical operator
        bool operator==(Complex);

        //for print result
        void showValues();
        
};

//binary operator overloading
Complex Complex::operator+(Complex operand2){
    Complex temp;
    temp.x = x + operand2.x;
    temp.y = y + operand2.y;

    return temp;
}

//unary operator overloading
Complex Complex::operator-(){
    Complex temp;
    temp.x = -x;
    temp.y = -y;

    return temp;
}

Complex Complex::operator++(){
    Complex temp;

    temp.x = ++x;
    temp.y = ++y;

    return temp;
}

Complex Complex::operator++(int){
    Complex temp;

    temp.x = x++;
    temp.y = y++;

    return temp;
}

void Complex::showValues(){
    cout<<"x = "<<x<<" ... y = "<<y<<endl;
}

bool Complex::operator==(Complex operand){
    return ((x == operand.x) && (y == operand.y));
}

Complex operator*(Complex operand1, Complex operand2){
    Complex temp;

    temp.x = operand1.x * operand2.x;
    temp.y = operand1.y * operand2.y;

    return temp;
}

int main(){

    Complex c1(2, 5), c2(10, 20), c3, c4, c5, c6;

    // c3 = c1.operator+(c2);
    c3 = c1+c2; //binary operator overloading
    c3.showValues();

    // c4 = c1.operator-();
    c4 = -c1; //unary operator overloading
    c4.showValues();

    //unary prefix and postfix operator overloading with increment and decrement
    c5 = ++c3;
    c5.showValues();

    c5 = c3++;

    c5.showValues();
    c3.showValues();

    //checking c5 and c3 equal or not by relational operator and logical operator overloading
    cout<<(c5 == c3)<<endl;

    c6 = c1*c2;
    c6.showValues();
    return 0;
}