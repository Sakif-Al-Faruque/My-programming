#include <iostream>

using namespace std;

int main(){
    int m, n, k;

    m = 2;
    n = 2;
    k = 3;

    int a[m][k];
    int b[k][n];
    int c[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            c[i][j] = 0;
        }
        cout<<endl;
    }

    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    b[0][0] = 3;
    b[0][1] = 4;
    b[1][0] = 6;
    b[1][1] = 7;
    b[2][0] = 9;
    b[2][1] = 10;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            for(int l=0; l<k; l++){
                c[i][j] += (a[i][l]*b[l][j]);
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}