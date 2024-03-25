#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    int y;
    vector <int> nok = {};

    cin>>x>>y;
    for (int i = x; i <= y * x; i++){
        if (i % x == 0 && i % y == 0){
            nok.push_back(i);
            
        }
    }
    cout << "nok: " << nok[0] << endl;

}