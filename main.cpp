#include <iostream>
#include <random>
using namespace std;


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