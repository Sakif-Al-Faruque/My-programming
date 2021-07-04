#include <iostream>
#include <fstream>
#include <cstring>
#define SIZE 256

using namespace std;

int main(){
    //use of eof
    /* ifstream in("test");
    if(!in){
        cout<<"File can not be opened"<<endl;
    }
    
    string str;
    while (!in.eof())
    {
        in>>str;
        cout<<str<<endl;
    }
    in.close(); */

    //use of get function to take input from file
    /* ifstream in("test1", ios::in | ios::binary);
    char c;
    while (!in.eof())
    {
        in.get(c);
        cout<<c;
    }
    in.close(); */

    //use of put function to give output into file
    /* ofstream out("test1", ios::out | ios::binary);
    char c;
    do{
        cin.get(c);
        out.put(c);
    }while (c != '$');
    out.close(); */

    //use of write function to give output into file
    /* double num = 10.45;
    char str[] = "\nThis is text";

    ofstream out("test2", ios::out | ios::binary);
    out.write((char *) &num, sizeof(num));
    out.write(str, strlen(str));
    out.close(); */

    //use of write function to give output into file
    /* double num;
    char str[80];
    ifstream in("test2", ios::in | ios::binary);
    in.read((char*) &num, sizeof(double));
    in.read(str, 80);

    cout<<num<<" "<<str<<endl;
    cout<<in.gcount()<<endl; // number of character count
    in.close(); */

    //use of all version of get and getline function: https://www.youtube.com/watch?v=ZFrgZBGcs6o
    /* ifstream in("test3", ios::binary | ios::in);
    if(!in){
        cout<<"File can not be opened"<<endl;
    }
    char str[SIZE];
    char letter;

    in.getline(str, SIZE);
    cout<<str<<endl;

    in.getline(str, SIZE, ','); // remove the delimiter ','
    cout<<str<<endl;
    in.get(letter); // take the letter after delimiter
    cout<<letter<<endl;

    in.ignore(100, '\n'); //ignore 100 letter till new line

    in.get(str, SIZE, ','); // won't remove the delimiter
    cout<<str<<endl;

    in.get(letter);
    cout<<letter<<endl;

    //in.get(str, SIZE);
    //cout<<str<<endl; */

    //use of get, peek, and putback function: https://www.youtube.com/watch?v=yMwA4u7eXEY
    /* ifstream in("test4", ios::binary | ios::in);
    if(!in){
        cout<<"File can not be opened"<<endl;
    }
    char ch1, ch2;

    ch1 = in.peek(); //makes a copy of element from buffer stream and stores in variable
    cout<<ch1<<endl;

    in.get(ch2);    // removes the element from buffer stream and store in variable
    cout<<ch2<<endl; 

    in.putback('$'); // put the character on that place where get function has been worked
    ch1 = in.peek();
    cout<<ch1<<endl;  */
    
    //in.close();
    return 0;
}