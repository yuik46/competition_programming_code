#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "Sunny"){
        cout << "Cloudy" << endl;
    }
    else if(s == "Cloudy"){
        cout << "Rainy" << endl;
    }
    else if(s == "Rainy"){
        cout << "Sunny" << endl;
    }
}