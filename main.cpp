#include <iostream>
using namespace std;

int random (int N){
    // in a range of 0 to N-1
    return rand() % N;
    /*
    int lb = 20, ub = 100;
    // This program will create some sequence of random
    // numbers on every program run within range lb to ub
    for (int i = 0; i < 5; i++) cout << (rand() % (ub - lb + 1)) + lb << " ";
    */
}

int main(){
    char arr[8][8];
    char point = '.';
    char star = '*';

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            arr[i][j]=point;
            if (j!=8) cout<<arr[i][j]<<" ";
            else cout<<arr[i][j];
        }
        cout<<endl;
    }


}