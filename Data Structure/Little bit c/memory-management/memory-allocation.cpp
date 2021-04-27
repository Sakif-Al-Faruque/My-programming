#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    //for char
    char *description;

    description = (char*)malloc(50 * sizeof(char));

    description = "Sakif al Faruque";
    
    cout<<description;

    description = (char*)realloc(description, 100 * sizeof(char));

    description = "Sakif al Faruque. jiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";

    cout<<sizeof(description)<<endl;

    cout<<*(description+1)<<endl;

    cout<<description;

    free(description);

    // for int
    /* int *arr = (int*) malloc(15 * sizeof(int));

    *arr = 10;
    *(arr+1) = 20;
    *(arr+2) = 30;

    for(int i=0; i<3; i++){
        cout<<*(arr+i)<<endl;
    } */
}