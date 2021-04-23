#include<iostream>
#include<math.h>
using namespace std;
class Point
{    
public:
    int x, y;
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    void chCod(){
        cout<<"("<<x<<","<<y<<") is on ";
        if(x>0 && y>0){
            cout<<"1st cordinate"<<endl;
        }else if(x<0 && y>0){
            cout<<"2nd cordinate"<<endl;
        }else if(x<0 && y<0){
            cout<<"3rd cordinate"<<endl;
        }else if(x>0 && y<0){
            cout<<"4th cordinate"<<endl;
        }else{
            cout<<"Undefined"<<endl;
        }
    }
    void calDis(Point ref){
        float xaxis = (this->x - ref.x);
        float yaxis = (this->y - ref.y);
        float rs = (pow(xaxis, 2) + pow(yaxis, 2));
        double dis = sqrt(rs);
        cout<<"Distance will be: "<<dis<<endl;
    }
};
int main()
{
    Point p1(1, 2);
    Point p2(3, -4);
    p1.chCod();
    p2.chCod();
    p1.calDis(p2);
    //cout<<"Hello world";
    return 0;
}