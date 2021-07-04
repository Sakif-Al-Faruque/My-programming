#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    //for giving output to file
    ofstream fout("test"); //open the file
    if(!fout){ //testing the file is opened or not
        cout<<"File can not be opened"<<endl;
    }
    fout<<"I am sakif"<<endl; //pass the message to file stream
    fout<<"This is newline"<<endl;
    fout.close(); //file should be close after the operation

    //open the file in input format
    ifstream fin("test");  
    if(!fin){
        cout<<"File can not be opened"<<endl;
    }
    string str1, str2, str3, strl1, strl2;
    //fin>>str1>>str2>>str3; //take the input regarding space and line 
    //cout<<str1<<" "<<str2<<" "<<str3<<endl;
    getline(fin, strl1); //when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second
    getline(fin, strl2);
    cout<<strl1<<endl;
    cout<<strl2<<endl;
    fin.close();
    
    return 0;
}