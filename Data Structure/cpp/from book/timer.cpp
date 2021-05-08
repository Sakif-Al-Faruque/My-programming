#include <iostream>
#include <ctime>

using namespace std;

class Timer{
    clock_t start, end;
    public:
        Timer();
        ~Timer();
};

Timer::Timer(){
    cout<<"Timer started..."<<endl;
    start = clock();
}

Timer::~Timer(){
    end = clock();
    
    cout<<"Timer ends at "<<(end - start)/CLOCKS_PER_SEC<<endl;
}

int main(){
    Timer t1;
    int input;

    //to make delay
    cout<<"press any number to continue...";
    cin>>input;
    return 0;
}