//unsolved
#include <iostream>
#include <cstring>

using namespace std;

class samp{
    char *s;
    public:
        samp(){s = NULL;}
        ~samp(){if(s){free(s); cout<<"Freeing s"<<endl;}}
        void show(){cout<<s<<endl;}
        void set(char *str);
};

void samp::set(char *str){
    s = (char *)malloc(strlen(str)+1);

    if(!s){
        cout<<"Allocation error"<<endl;
    }

    strcpy(s, str);

}

samp input(char s[]){
    samp str;

    str.set(s);
    return str;
}

int main(){
    char s[80];
    samp ob;

    cout<<"Enter your text: ";
    cin>>s;
    
    ob = input(s);
    ob.show();

    return 0;
}