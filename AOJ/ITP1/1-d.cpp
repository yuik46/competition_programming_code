#include <iostream>

using namespace std;

int main(){
    int s;
    cin >> s;
    //cout << s / 3600 << ":" << s / 36000 << ":" << s << endl;
    cout << s / 3600 << ":" << (s % 3600) / 60 << ":" << s % 60 << endl;
}